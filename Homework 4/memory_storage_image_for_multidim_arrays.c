#include <stdio.h>
//#include <stddef.h>
int main()
{
    int dim, a;
    int l1, l2, l3, l4, l5, x1, x2, x3, x4, x5;
    scanf("%d", &dim);
    switch (dim)
    {
    case 1:
        scanf("%d%d", &l1, &x1);
        a = (x1) * sizeof(int);
        printf("(%d)*%d=%d\n", x1, sizeof(int), a);
        break;
    case 2:
        scanf("%d%d%d%d", &l1, &l2, &x1, &x2);
        a = (x1 * l2 + x2) * sizeof(int);
        printf("(%d*%d+%d)*%d=%d\n", x1, l2, x2, sizeof(int), a);
        break;
    case 3:
        scanf("%d%d%d%d%d%d", &l1, &l2, &l3, &x1, &x2, &x3);
        a = (x1 * l2 * l3 + x2 * l3 + x3) * sizeof(int);
        printf("(%d*%d*%d+%d*%d+%d)*%d=%d\n", x1, l2, l3, x2, l3, x3, sizeof(int), a);
        break;
    case 4:
        scanf("%d%d%d%d%d%d%d%d", &l1, &l2, &l3, &l4, &x1, &x2, &x3, &x4);
        a = (x1 * l2 * l3 * l4 + x2 * l3 * l4 + x3 * l4 + x4) * sizeof(int);
        printf("(%d*%d*%d*%d+%d*%d*%d+%d*%d+%d)*%d=%d\n", x1, l2, l3, l4, x2, l3, l4, x3, l4, x4, sizeof(int), a);
        break;
    case 5:
        scanf("%d%d%d%d%d%d%d%d%d%d", &l1, &l2, &l3, &l4, &l5, &x1, &x2, &x3, &x4, &x5);
        a = (x1 * l2 * l3 * l4 * l5 + x2 * l3 * l4 * l5 + x3 * l4 * l5 + x4 * l5 + x5) * sizeof(int);
        printf("(%d*%d*%d*%d*%d+%d*%d*%d*%d+%d*%d*%d+%d*%d+%d)*%d=%d\n", x1, l2, l3, l4, l5, x2, l3, l4, l5, x3, l4, l5, x4, l5, x5, sizeof(int), a);
        break;
    }
    return 0;
}
