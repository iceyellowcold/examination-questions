#include <stdio.h>
#pragma warning(disable : 4996)
int main(void)
{
	int n = 0;
	double a = 1;//��ĸ
	double b = 2;//����
	double d = 0;
	double e = 0;
	scanf("%d", &n);
	for (int c = 0; c < n; c++)
	{
		d = d + b / a;
		e = b;//��e���ڷ���
		b = e + a;//���ӵ��ڷ��Ӽӷ�ĸ
		a = e;//��ĸ���ڷ���
	}
	printf("%.2lf", d);

	return 0;
}