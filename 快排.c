/*快速排列程序*/
#include <stdio.h>
#include<malloc.h>
#define maxn 10005

void quicksort(int b[], int l, int r)
{
    int i = l, j = r, key;
    if (l == r) return;
    else key = b[i];
    while (i < j)
    {
        while ((i < j) && b[j] > key) j--;
        if (i < j) b[i++] = b[j];
        while ((i < j) && b[i] <= key) i++;
        if (i < j) b[j--] = b[i];
    }
    b[i] = key;
    quicksort(b, l, i - 1);
    quicksort(b, i + 1, r);
}

int main002()
{
int a[] = { 49 , 38 , 65 , 97 , 76 , 13 , 27 };
printf("请输入序列的元素个数：\n");
int cnt =sizeof(a) / sizeof(a[0]);


    quicksort(a, 0, cnt - 1);
    for ( int i = 0; i < cnt; i++)
        printf("%d ", a[i]);
    return 0;
}