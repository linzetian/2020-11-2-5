//递归实现n的k次方..
//编写一个函数实现n的k次方，使用递归实现
#include<stdio.h>
double Pow(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else if(k<0)
	{
		return (1.0 / Pow(n, -k));
	}
	else
	{
		return n * Pow(n, k - 1);
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d",&n,&k);
	double ret = Pow(n, k);
	printf("%lf",ret);
	return 0;
}