#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
    int lena, lenb;
    char a[MAX], b[MAX];
    scanf("%s%s", a, b);
    lena = strlen(a);
    lenb = strlen(b);
    int count2 = 0;
    for (int i = 0; i <= lena - lenb; i++)
    {
        int count = 0;
        for (int j = 0; j < lenb; j++)
        {
            if (a[i + j] == b[j])
                count++;
            else
                break;
        }
        if (count == lenb)
        {
            printf("%d\n", i);
            break;
        }
        count = 0;
        count2++;
    }
    if (count2 == lena - lenb + 1)
        printf("-1\n");
}