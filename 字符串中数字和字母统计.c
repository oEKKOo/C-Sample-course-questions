/*字符串中数字和字母个数统计*/
#include<stdio.h>
int main008()
{
	int count1=0, count2=0;
	char c;
	c = getchar();
	while (c != '*') {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && 'c' <= 'Z'))
			count1 += 1;
		if (c <= '9' && c >= '0')
			count2 += 1;
		c = getchar();
	}
	printf("%4d%4d", count1, count2);
	return 0;
}