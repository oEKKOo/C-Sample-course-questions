/*×Ö·û´®ÊäÈëÊä³ö*/
#include<stdio.h>
#include<malloc.h>
int main012()
{
	char c, * s, len = 0;
	s = (char*)malloc(81);
	while ((c = getchar()) != '\n' && len < 80) {
		*s++ = c;
		len++;
	}
	*s = '\0';
	printf("%s", s - len);

	return 0;
}