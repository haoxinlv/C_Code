#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,c,i;
    scanf("%d",&n);
    if(n==1)
    {
        printf("0");
    }
    else if(n==2)
    {
        printf("1");
    }
    else
    {
        for(a=1,b=1,c=0,i=3;i<=n;i=i+1)
        {
            c=a+b;
            a=b;
            b=c;
        }
        printf("%d",c%10000);
    }

    return 0;
}