/*������ʾ����1��10��2��5����*/
#include<stdio.h>  
double power(int, int);
int main013(void)
{
	int x, n;
	for (x = 1; x <= 10; x++)
	{
		for (n = 2; n <= 5; n++)
			printf("%10.0f", power(x, n));
		printf("\n");
	}
	return 0;
		
}
double power(int x, int n)
{
	double p;
	for (p = 1; n > 0; n--)
		p *= x;
	return p;
}