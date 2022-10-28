#include <stdio.h>
#define MAX 120
int main()
{
    int a[MAX][MAX] = {0}, b[MAX][MAX] = {0};
    int row, col, i, j, sum, count = 0;
    scanf("%d%d", &row, &col);
    for (int p = 0; p < row; p++)
    {
        for (int q = 0; q < col; q++)
        {
            scanf("%d", &a[p][q]);
        }
    }
    for (int p = 0; p < row; p++)
    {
        for (int q = 0; q < col; q++)
        {
            b[p][q] = 1;
        }
    }
    sum = row * col;
    i = 0;
    j = 0;
    if (row == 1 && col == 1)
    {
        printf("%d", a[0][0]);
    }
    else
    {

        while (count < sum)
        {
            while (b[i][j])
            {
                count++;
                b[i][j] = 0;
                printf("%d\n", a[i][j++]);
            }
            j--;
            i++;
            while (b[i][j])
            {
                count++;
                b[i][j] = 0;
                printf("%d\n", a[i++][j]);
            }
            i--;
            j--;
            while (b[i][j])
            {
                count++;
                b[i][j] = 0;
                printf("%d\n", a[i][j--]);
            }
            j++;
            i--;
            while (b[i][j])
            {
                count++;
                b[i][j] = 0;
                printf("%d\n", a[i--][j]);
            }
            i++;
            j++;
        }
    }
}