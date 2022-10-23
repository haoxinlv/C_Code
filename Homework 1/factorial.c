#include <stdio.h>
int main()
{
    int n;
    unsigned long long factorial = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("%llu", factorial);
    return 0;
}