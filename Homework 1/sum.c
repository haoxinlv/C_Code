#include <stdio.h>
int main()
{
    int k, i, s;
    s = 0;
    scanf("%d", &k);
    i = k;
    while (i >= 1)
    {
        s = s + i;
        i--;
    }
    double avg;
    avg = s / (double)k;
    printf("%d,%.2f\n", s, avg);
    i = 2;
    while (i <= k)
    {
        printf("%d ", i);
        i = i + 2;
    }
    return 0;
}