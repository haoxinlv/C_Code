#include <stdio.h>
void ifrelativemonth();
int main()
{
    int n;
    scanf("%d", &n);
    for (; n >= 1; n--)
    {
        ifrelativemonth();
    }
    return 0;
}

void ifrelativemonth()
{
    int year, month1, month2, t, diff = 0;
    scanf("%d %d %d", &year, &month1, &month2);
    if (month1 > month2)
    {
        t = month1;
        month1 = month2;
        month2 = t;
    }
    while (month1 < month2)
    {
        if (month1 == 1 || month1 == 3 || month1 == 5 || month1 == 7 || month1 == 8 || month1 == 10 || month1 == 12)
        {
            diff += 31;
            month1 += 1;
        }
        else if ((month1 == 2) && !(year % 4 == 0 && year % 100 != 0))
        {
            diff += 28;
            month1 += 1;
        }
        else if ((month1 == 2) && (year % 4 == 0 && year % 100 != 0))
        {
            diff += 29;
            month1 += 1;
        }
        else
        {
            diff += 30;
            month1 += 1;
        }
    }
    if (diff % 7 == 0)
        printf("YES\n");
    else
        printf("NO\n");
}