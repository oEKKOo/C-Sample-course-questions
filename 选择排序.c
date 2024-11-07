/*用选择排序将数组从小到大排序*/
#include<stdio.h>
#define N 5
int main010()
{
	int i, j, t;
	int a[N];
	for (i = 0; i < N; i++)
		scanf_s("%d", &a[i]);
	for (i = 0; i < N-1; i++)
		for (j = i + 1; j < N; j++)
			if (a[i] > a[j]) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
	for (i = 0; i < N; i++)
		printf("%d", a[i]);
	return 0;
}