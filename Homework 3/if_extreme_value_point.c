#include <stdio.h>
void inout();
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        inout();
    }
}
void inout()
{
    int n1, count = 0;
    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < n1; j++)
    {
        if (j == 0 && (a[j] != a[j + 1]))
        {
            if (count != 0)
                printf(" ");
            printf("%d", j);
            count++;
        }
        else if (j == (n1 - 1) && (a[j] != a[j - 1]))
        {
            if (count != 0)
                printf(" ");
            printf("%d", j);
            count++;
        }
        else if ((a[j] < a[j - 1] && a[j] < a[j + 1]) || a[j] > a[j - 1] && a[j] > a[j + 1])
        {
            if (count != 0)
                printf(" ");
            printf("%d", j);
            count++;
        }
    }
    printf("\n");
}