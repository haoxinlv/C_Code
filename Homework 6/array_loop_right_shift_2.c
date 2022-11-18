#include <stdio.h>
void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void reverse(int *p, int n)
{
    int times = n / 2;
    for (int i = 0; i < times; i++)
    {
        swap(&p[i], &p[n - 1 - i]);
    }
}
int main()
{
    int n, m;
    int arr[102] = {0};
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    m = m % n;
    reverse(&arr[0], n - m);
    reverse(&arr[n - m], m);
    reverse(arr, n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            printf("%d", arr[i]);
            count = 1;
        }
        else
            printf(" %d", arr[i]);
    }
}