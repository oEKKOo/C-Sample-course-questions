/*ººÅµËþ*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void move(char getone, char putone)
{
	printf("%c-->%c\n", getone, putone);
}
void hanoit(int n, char a, char b, char c)
{
	if (n == 1) {
		move(a, c);
	}
	else {
		hanoit(n - 1, a, c, b);
		move(a, c);
		hanoit(n - 1, b, a, c);
	}
}
int main001()
{
	int m,all;
	printf("input the number of dishes:");
	scanf_s("%d", &m);
	hanoit(m, 'A', 'B', 'C');
	all = pow(2, m)-1;
	printf("total number of movements:%d\n",all);
	return 0;
}