#include <stdio.h>
#include <math.h>
long double func(long double);
int main()
{
   float x1, x2;
   scanf("%f,%f", x1, x2);
}

long double func(long double x)
{
   long double value;
   value = 2 * x * x * x + 4 * x * x + 3 * x + 6;
   return value;
}