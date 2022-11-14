#include <stdio.h>
#include <math.h>
double computersqrt(double a, double init);
int main()
{
    double a;
    scanf("%lf", &a);
    printf("%.7f", computersqrt(a, 1));
}
double computersqrt(double a, double init)
{
    double result;
    result = (init + a / init) / 2;
    if (fabs(result - init) < 1e-5)
        return result;
    else
        return computersqrt(a, result);
}