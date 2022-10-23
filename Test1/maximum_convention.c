#include <stdio.h>
void main()
{
    int m, n, r;
    scanf("%d%d", &m, &n);
    printf("%d和%d的最大公因子是\n", m, n);
    while (n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }
    printf("%d\n", m);
    return m;
}