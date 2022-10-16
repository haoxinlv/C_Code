#include<stdio.h>
#include<math.h>
int main()
{
    int j;
    double i,t,pi;
    for(i=1,j=1,pi=0.0,t=1.0;fabs(t)>=1e-10;i=i+2,j=-j,t=j/i)
    {
     pi=pi+t;
    }
    printf("%10.8lf",pi*4);
    return 0;
}