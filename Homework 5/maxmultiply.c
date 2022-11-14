#include <stdio.h>

int main()
{
    int a[100] = {0};
    int num, i;
    scanf("%d", &num);
    int sum = 0;
    for (i = 0; sum + i + 2 <= num; i++)
    {
        a[i] = i + 2;
        sum += i + 2;
    }
    sum = num - sum;
    for (int k = 0; k < 2; k++)
    {
        if (sum > 0)
        {
            int ii = i;
            for (int j = ii - 1; (j >= 0) && (sum > 0); j--)
            {
                a[j]++;
                sum--;
            }
        }
    }
    printf("%d", a[0]);
    for (int l = 1; l < i; l++)
    {
        printf(" %d", a[l]);
    }
}