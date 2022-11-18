#include <stdio.h>
#include <string.h>
int IsFirstNumber(char str[]);
int AreCharsLegal(char str[]);
int IsLegalIdentifier(char str[]);
int main()
{
    char mystring[81] = {" "};
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        gets(mystring);
        printf("%d\n", IsLegalIdentifier(mystring));
    }
}
int IsFirstNumber(char str[])
{
    if (str[0] >= '0' && str[0] <= '9')
        return 1;
    else
        return 0;
}
int AreCharsLegal(char str[])
{
    char std[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890_";
    //printf("%zu\n",strspn(str,std));
    if (strspn(str, std) == strlen(str))
        return 1;
    else
        return 0;
}
int IsLegalIdentifier(char str[])
{
    //printf("IsFirstMumber:%d\n", IsFirstNumber(str));
    //printf("AreCharsLegal:%d\n", AreCharsLegal(str));
    int len = strlen(str);
    //printf("The last elements ascii are:%d %d %d\n", str[len - 1], str[len], str[len + 23]);
    if (IsFirstNumber(str) == 0 && AreCharsLegal(str) == 1)
        return 1;
    else
        return 0;
}