#include <stdio.h>
#include <string.h>
#define MAX 220
void in_add_out()
{
   int x[MAX] = {0}, y[MAX] = {0}, z[MAX] = {0}; //数组元素初始化为0
   char a[MAX], b[MAX];                          //字符型数组,来存储a和b
   int len, len1, len2;                          //三个字符串的长度
   scanf("%s%s", a, b);                          //输入a,b
   len1 = strlen(a);                             // a的位数
   len2 = strlen(b);                             // b的位数

   /* 倒序存储 */

   int i = 0, j = 0, k = 0;
   for (i = len1 - 1; i >= 0; i--)
   {
      x[j] = a[i] - '0'; //数字字符减0的ASCII码就化成数字了
      j++;
   }
   i = 0;
   for (i = len2 - 1; i >= 0; i--)
   {
      y[k] = b[i] - '0';
      k++;
   }

   /* 比较数组长度，确定总长度 */

   if (len1 > len2)
      len = len1;
   else
      len = len2;

   /* 开始计算 */

   i = 0;
   int m = 0;
   for (i = 0; i < len; i++)
   {
      z[i] = (x[i] + y[i] + m) % 10; //进位的实现
      if (x[i] + y[i] + m >= 10)
         m = 1;
      else
         m = 0;
   }
   if (x[len - 1] + y[len - 1] + m >= 10) //最高位处理
      z[i] = 1;                         //最高位是1,总长度是i
   else
      i = i - 1;       //如果不进位，总长度是i-1
   for (; i >= 0; i--) //倒序逐位输出z中元素
      printf("%d", z[i]);
   printf("\n");
}
int main()
{
    in_add_out();//前面的函数
    return 0;
}