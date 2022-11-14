#include <stdio.h>
#include <math.h>
double computingsqrt(double a,double x);
int main()
{
    double a;
    scanf("%lf",&a);
    printf("%.7f",computingsqrt(a,1));
}
double computingsqrt(double a,double x)
{
    double x1,x2;
    x2 = x;
    do
    {
        x1 = x2;
        x2 = (x1 + a / x1) / 2;
    } while (fabs(x2-x1) > 1e-5);
    return x2;
}
