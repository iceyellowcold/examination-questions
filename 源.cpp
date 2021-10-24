#include <stdio.h>
#pragma warning(disable : 4996)
int main(void)
{
	int n = 0;
	double a = 1;//分母
	double b = 2;//分子
	double d = 0;
	double e = 0;
	scanf("%d", &n);
	for (int c = 0; c < n; c++)
	{
		d = d + b / a;
		e = b;//令e等于分子
		b = e + a;//分子等于分子加分母
		a = e;//分母等于分子
	}
	printf("%.2lf", d);

	return 0;
}