#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n, sum = 0;
    int length[6];
    int position[6];
    /*输入*/
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &length[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &position[i]);
    }
    /*输出同时计算*/
    printf("(");
    bool IsFirst = true;
    for (int i = 0; i < n; i++)
    {
        int product = position[i];
        if (IsFirst == true)
        {
            printf("%d", position[i]);
            IsFirst = false;
        }
        else
        {
            printf("+%d", position[i]);
        }

        for (int j = i + 1; j < n; j++)
        {
            printf("*%d", length[j]);
            product *= length[j];
        }
        sum += product;
    }
    printf(")*%d=%d", sizeof(int), sum * sizeof(int));
}