#include <stdio.h>
int main()
{
    int N,n;
    int a[101]={0};
    scanf("%d",&N);
    for (int i=1;i<=N;i++)
    scanf("%d",&a[i]);
    scanf("%d",&n);
    for (int i=N;i>=1;i--)
    a[i+n]=a[i];
    for (int i=1;i<=N;i++)
    {
        if (i==1)
        printf("%d",a[i+N]);
        else if(i<=n)
        printf(" %d",a[i+N]);
        else
        printf(" %d",a[i]);
    }
}