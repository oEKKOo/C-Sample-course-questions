/*��5��5����Խ���Ԫ�غ�*/
#include<stdio.h>
int main007()
{
	int a[5][5], i, j, sum;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			scanf_s("%d", &a[i][j]);
	sum = 0;
	for (i = 0; i < 5; i++)
		sum += a[i][i];
	for (i = 0; i < 5; i++)
		sum += a[i][4 - i];
	sum -= a[2][2]; printf("%d", sum);
	return 0;
}