#include <stdio.h>
int a = 20;
void change()
{
    a = 10;
}
int main()
{
    change();
    printf("%d",a);
}