#include <stdio.h>
#include <string.h>
void addition()
{
   int x[100] = {0}, y[100] = {0}, z[100] = {0};
   char a[100], b[100];
   int len, len1, len2; //三个字符串的长度
   scanf("%s%s", a, b); //输入a,b
   len1 = strlen(a);    // a的位数
   len2 = strlen(b);    // b的位数

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

   /* 比较数组长度 */

   if (len1 > len2)
      len = len1;
   else
      len = len2;

   /* 开始计算 */

   i = 0;
   int m = 0;
   for (i = 0; i < len; i++)
   {
      z[i] = (x[i] + y[i] + m) % 2; //进位的实现
      if (x[i] + y[i] + m > 1)
         m = 1;
      else
         m = 0;
   }
   if (x[len - 1] + y[len - 1] + m > 1) //最高位处理
      z[i] = 1;                         //最高位是1,总长度是i
   else
      i = i - 1; //如果不进位，总长度是i-1
   for (; i >= 0; i--)
      printf("%d", z[i]);
   printf("\n");
}
int main()
{
   int n0;
   scanf("%d", &n0);
   for (; n0 > 0; n0--)
   {
      addition();
   }
   return 0;
}