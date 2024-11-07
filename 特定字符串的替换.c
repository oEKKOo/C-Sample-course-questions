/*将一字符串所有包含A子串的内容用B子串替换*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main009()
{
	char m[100], a[100], b[100];
	char new[100] ="\0";
	char* ptr;
	printf("请输入母串：\n");
	gets_s(m,100);
	printf("请输入A子串：\n");
	gets_s(a, 100);
	printf("请输入B子串：\n");
	gets_s(b, 100);
	while ((ptr = strstr(m, a)) != NULL)
	{
		*ptr = '\0';
		strcat(new, m);
		strcat(new, b);
		strcpy(m, ptr + strlen(a));
	}
	strcat(new, m);
	printf("新串为：\n");
	puts(new);
	return 0;
}