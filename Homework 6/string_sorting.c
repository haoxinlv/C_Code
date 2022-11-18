#include <stdio.h>
#include <string.h>
#define MAX 1000
char str[MAX][MAX];
void swap(char **pa, char **pb)
{
    char *t = *pa;
    *pa = *pb;
    *pb = t;
}
int main()
{
    char *ps[MAX] = {NULL};
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        ps[i] = &str[i][0];
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    for (int i = 0; i < n - 1; i++) //写一个选择排序,当然遍历到第n-1个元素就行
    {
        int curmin = i;                 //从下标i开始,找最小值
        for (int j = i + 1; j < n; j++) //考察下标为i+1之后的元素
        {
            if (strcmp(ps[j], ps[curmin]) < 0)
                curmin = j;            //最小的是下标j的元素
        }
        swap(&ps[curmin], &ps[i]); //换到有序的列表的最后一个
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", ps[i]);
    }
}