/*��һ�ַ������а���A�Ӵ���������B�Ӵ��滻*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main009()
{
	char m[100], a[100], b[100];
	char new[100] ="\0";
	char* ptr;
	printf("������ĸ����\n");
	gets_s(m,100);
	printf("������A�Ӵ���\n");
	gets_s(a, 100);
	printf("������B�Ӵ���\n");
	gets_s(b, 100);
	while ((ptr = strstr(m, a)) != NULL)
	{
		*ptr = '\0';
		strcat(new, m);
		strcat(new, b);
		strcpy(m, ptr + strlen(a));
	}
	strcat(new, m);
	printf("�´�Ϊ��\n");
	puts(new);
	return 0;
}