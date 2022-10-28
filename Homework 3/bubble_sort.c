#include <stdio.h>
int main()
{
    int a[21] = {0};
    int n, t;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j < i; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", a[i]);
    }
}