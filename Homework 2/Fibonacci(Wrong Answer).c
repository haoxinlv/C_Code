#include <stdio.h>

int fibonaci_tail(int i)
{
    if (i == 0)
    {
        return 0;
    }
    if (i == 1)
    {
        return 1;
    }
    return (fibonaci_tail(i - 1) + fibonaci_tail(i - 2)) % 10000;
}
int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", fibonaci_tail(a));
}