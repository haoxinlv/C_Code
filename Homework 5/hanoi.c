#include <stdio.h>
int main()
{
    void hanoi(int, char, char, char);
    int m;
    scanf("%d", &m);
    hanoi(m, 'A', 'B', 'C');
}

void hanoi(int n, char one, char two, char three) //将one座上的片经two座移到three座
{
    void move(char, char);
    if (n == 1)
    {
        move(one, three);
    }
    else
    {
        hanoi(n - 1, one, three, two);
        move(one, three);
        hanoi(n - 1, two, one, three);
    }
}

void move(char a, char b)
{
    printf("%c->%c\n", a, b);
}