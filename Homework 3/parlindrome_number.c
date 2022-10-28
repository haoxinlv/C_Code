#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int b = 0;
    int len;
    scanf("%s", a);
    len = strlen(a);
    for (int i = len / 2; i >= 1; i--)
    {
        if (a[i - 1] != a[len - i])
            b++;
    }
    if (b == 0)
        printf("yes");
    else
        printf("no");
}