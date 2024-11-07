/*N»ÊºóµÝ¹éËã·¨*/
#include<stdio.h>
int attack(int line, int list);
void findspace(int line, int n);
//row¼ÈÊÇµ±Ç°ÐÐÊý£¬Ò²ÊÇÕýÔÚÕÒµØ·½µÄqueenµÄÐòºÅ

int queen[13] = { 0 };
int solution = 0;

int main004(void) {
	int n;
	scanf_s("%d", &n);
	findspace(0, n);
	printf("%d", solution);
	return 0;
}

int attack(int line, int list) {
	for (int i = 0; i < line; i++) {
		if (list == queen[i])
			return 1;
		if (line - i == queen[i] - list || line - i == list - queen[i])
			return 1;
	}
	return 0;
}

void findspace(int line, int n) {
	if (line >= n) { //Èç¹ûn¸öÒÑ¾­·ÅÍêÁË
		solution++;
		return;
	}
	for (int list = 0;list < n; list++) {
		if (attack(line, list) == 0) {
			//µÚrowÐÐµÄµÚi¸öÎ»ÖÃ²»»á±»¹¥»÷£¬°Ñqueen[row]·Å½øÈ¥
			queen[line] = list;
			findspace(line + 1, n);//Ã»·ÅÍê£¬ÕÒÏÂÒ»¸öqueenµÄÎ»ÖÃ
		}
	}
}