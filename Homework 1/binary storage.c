#include <stdio.h>
int main()
{
    float a, *p; // a是实型数，p是实型数指针
    scanf("%f", &a);
    unsigned int b, *q;    //定义一个无符号的整型指针q,b也是无符号的整型数，将来存放二进制数值
    p = &a;                // p指向a的存储位置，内容是实型数
    q = (unsigned int *)p; // q也指向a的存储位置，内容是无符号整型数
                           //此时输出q指向位置的内容，就是其二进制存储数值
                           //即：原来4字节的实型数，现在看成是4字节的无符号整型数
                           //注意：指针类型的强制转换（本题的重点）
    b = *q; //*q运算是获取q指向位置的内容
    printf("%x", b);
}