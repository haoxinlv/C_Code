#include <stdio.h>
#define MAX 50
int a[MAX] = {0}, b[MAX] = {0}, c[2 * MAX + 20] = {0}, n1, n2;
void swap(int *, int *);
void fun1();
void sort(int array[], int len);
void fun2();
void fun3();
void fun4();
int main()
{
    fun1();
    fun2();
    fun3();
    fun4();
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void fun1()
{
    scanf("%d %d", &n1, &n2);
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < n2; j++)
    {
        scanf("%d", &b[j]);
    }
}
void sort(int array[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int minno = i;
        for (int j = i + 1; j < len; j++)
        {
            if (array[j] < array[minno])
            {
                minno = j;
            }
        }
        if (minno != i)
            swap(&array[i], &array[minno]);
    }
}
void fun2()
{
    sort(a, n1);
    sort(b, n2);
}
void fun3()
{
    for (int i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }
    for (int j = 0; j < n2; j++)
    {
        c[n1 + j] = b[j];
    }
}
void fun4()
{
    printf("%d", c[0]);
    for (int i = 1; i < n1 + n2; i++)
    {
        printf(" %d", c[i]);
    }
}