#include<stdio.h>
#include<string.h>
int x[100]={0},y[100]={0},z[110]={0};//将数组元素全部初始化为0
int main()
{
	char a[100],b[100];//把大数存储为字符串形式的数组 
	int len,len1,len2;//定义三个长度，后续用于存储字符串长度
	scanf("%s%s",a,b);//输入a，b字符串
	len1=strlen(a);//让len1为字符串a的长度，也就是大数a的位数
	len2=strlen(b);//让len2为字符串b的长度，也就是大数b的位数
	int i,j=0,k=0;//定义循环变量
	for(i=len1-1;i>=0;i--)//让下标从长度最后一位开始循环，把大数倒序储存到数组中，即字符串为123456，则数组为654321
	{
		x[j]=a[i]-'0';//把数组a倒着储存在数组x中,减0的ASCII码就化成数字了
		j++;//递减，然后循环，完成数组x倒叙储存数组a的操作
	}
	for(i=len2-1;i>=0;i--)//以同样的方法，将数组b倒叙储存为数组y 
	{
		y[k]=b[i]-'0';
		k++;
	}
	if(len1>len2)//比较数组长度（也就是大数大小）；让len等于最长的长度
		len=len1;
	else
		len=len2;
	i=0;//从最低位(个位)开始进行计算
	int m=0;
	for(i=0;i<len;i++)//循环相加并储存在新数组z中，短的len不够补0，也就是给原来的大数前加0（不影响大数大小） 
	{
		z[i]=(x[i]+y[i]+m)%10;//将所得数的个位存到数组z[i]中去
		if(x[i]+y[i]+m>=10)//判断两个位上的数相加是不是超过10，如果过了，就进1，没过，就不进
			m=1;//加在下一次循环中，类似于过10进1；
		else
			m=0;
	}
	if(x[i-1]+y[i-1]+m>=10)//判断运算的最大位的和是否>=10 
		z[i]=1;//数组为i位时，下标是从0到i-1，如果最大一位的和过10了，就多一位数组元素存放过10进的1
	else
		i=i-1;//如果没过，最大位就是i-1
	for(;i>=0;i--)//让数组下标从小到大循环输出，倒序输出数组z
		printf("%d",z[i]);
	printf("\n");
	return 0;
}