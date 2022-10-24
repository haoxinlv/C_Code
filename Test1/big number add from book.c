#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX_LEN 200
int an1[MAX_LEN + 10];
int an2[MAX_LEN + 10];
char szLine1[MAX_LEN + 10];
char szLine2[MAX_LEN + 10];
int main()
{
    scanf("%s", szLine1);
    scanf("%s", szLine2);
    int i, j;

    //库函数memset将地址an1开始的sizeof（an1）字节内容置为0
    // sizeof(an1)的值就是an1长度
    // memeset函数在string.h声明
    memset(an1, 0, sizeof(an1));
    memset(an2, 0, sizeof(an2));

    //下面把szLine1中储存的字符串形式的整数转化到an1中去
    // an1[0]对应于个位
    int nLen1 = strlen(szLine1);
    j = 0;
    for (i = nLen1 - 1; i >= 0; i--)
        an1[j++] = szLine1[i] - '0';

    int nLen2 = strlen(szLine2);
    j = 0;
    for (i = nLen2 - 1; i >= 0; i--)
        an2[j++] = szLine2[i] - '0';
        
    for (i = 0; i < MAX_LEN; i++)
    {
        an1[i] = an1[i] + an2[i];
        if (an1[i] >= 10)
        {
            an1[i] = an1[i] - 10;
            an1[i + 1]++;
        }
    }
    bool bStartOutput = false;
    for (i = MAX_LEN; i >= 0; i--)
    {
        if (bStartOutput)
            printf("%d", an1[i]);
        else if (an1[i])
        {
            printf("%d", an1[i]);
            bStartOutput = true;
        }
    }
    return 0;
}