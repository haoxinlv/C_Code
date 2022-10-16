#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c;
    double delta, x1, x2;
    scanf("%lf %lf %lf", &a, &b, &c);
    delta = sqrt(b * b - 4 * a * c);
    if (delta > 0)
    {

        x1 = (-b + delta) / (2 * a);
        x2 = (-b - delta) / (2 * a);
        (x1 > x2) ? (printf("x1=%.5f;x2=%.5f", x1, x2)) : printf("x1=%.5f;x2=%.5f", x2, x1);
    }
    else if (delta == 0)
    {
        printf("x1=x2=%.5f", -b / (2 * a));
    }
    else
    {
        printf("no solution");
    }
    return 0;
}