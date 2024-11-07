/*³¬¼¶ÅÝÅÝÅÅÐò*/
#include<stdio.h>
long long abs(long long a, long long b)
{
    long long  s;
    if (a > b)
        s = a - b;
    else s = b - a;
    return s;
}
void bubbleSort(long long a[], int n, int t)
{
    int i, j, flag;
    long long hold;
    for (i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (abs(a[j], t) > abs(a[j + 1], t))
            {
                hold = a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold;
                flag = 1;
            }
        }
        if (0 == flag)
            break;
    }
}
int main006()
{
    int n, t, i;
    long long a[1005];
    scanf_s("%d%d", &n, &t);
    for (i = 0; i < n; i++)
        scanf_s("%lld", &a[i]);
    bubbleSort(a, n, t);
    for (i = 0; i < n; i++)
        printf("%lld\n", a[i]);
    return 0;
}