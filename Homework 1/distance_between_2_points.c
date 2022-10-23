#include <stdio.h>
#include <math.h>
int main()
{
    double x1, y1, z1, x2, y2, z2, distance;
    scanf("%lf,%lf,%lf", &x1, &y1, &z1);
    scanf("%lf,%lf,%lf", &x2, &y2, &z2);
    distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) + (z1 - z2) * (z1 - z2));
    printf("%.2f", distance);
    return 0;
}