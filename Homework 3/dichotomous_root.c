#include <stdio.h>
#include <math.h>
long double f(long double);
int main()
{
   long double x1, x2, x0;
   do
   {
      scanf("%Lf,%Lf", &x1, &x2);
   } while (f(x1) * f(x2) > 0);

   x0 = (x1 + x2) / 2;

   do
   {
      if (f(x1) * f(x0) > 0)
      {
         x1 = x0;
         x0 = (x1 + x2) / 2;
      }
      else
      {
         x2 = x0;
         x0 = (x1 + x2) / 2;
      }
   } while (fabs(f(x0)) > 1e-6);
   printf("x=%.2Lf", x0);
}

long double f(long double x)
{
   long double value;
   value = 2 * x * x * x - 4 * x * x + 3 * x - 6;
   return value;
}