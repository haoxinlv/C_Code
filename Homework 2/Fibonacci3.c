#include <stdio.h>
int main()
{
    int n, a, b, c;
    a = 1;
    b = 1;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("1");
        break;
    case 2:
        printf("1");
        break;
    default:
        for (int i = 3; i <= n; i++)
        {
            c = (a + b)%10000;
            a = b;
            b = c;
        }
        printf("%d",c);

        break;
    }
    return 0;
}
