#include <stdio.h>

int main()
{
    int num;
    printf("输入一个数字：");
    scanf("%d",&num);
    (num%2==0)?printf("even"):printf("odd");
    return 0;

}