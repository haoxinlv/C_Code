#include <stdio.h>
#include <string.h>
#define PFFD(xxx) printf("%d", xxx)
#define PFFS(xxx) printf("%s", xxx)
#define SFFD(xxx) scanf("%d", xxx)
#define SFFS(xxx) scanf("%s", xxx)
#define ONEDIMLEN 100
int Real4min(char a[][ONEDIMLEN])
{
    int len[4];
    for (int i = 0; i < 4; i++)
    {
        len[i] = strlen(a[i]);
    }
    int min = len[0];
    for (int i = 1; i < 4; i++)
    {
        if (min > len[i])
        {
            min = len[i];
        }
    }
    return (min - 1);
}
int If4equal(char a[][ONEDIMLEN], int n)
{
    int isequal = 1;
    for (int i = 0; (i < 3) && (isequal == 1); i++)
    {
        if (a[i + 1][n] == a[i][n])
        {
            isequal = 1;
        }
        else
        {
            isequal = 0;
        }
    }
    return isequal;
}
int main()
{
    char a[4][ONEDIMLEN] = {0};
    for (int i = 0; i < 4; i++)
    {
        gets(a[i]);
    }
    int Realmin = Real4min(a);
    int count = 0;
    for (int j = 0; (j < Realmin) && If4equal(a, j); j++)
    {
        count++;
    }
    if (count > 0)
    {
        for (int k = 0; k < count; k++)
        {
            printf("%c",a[1][k]);
        }
    }
}