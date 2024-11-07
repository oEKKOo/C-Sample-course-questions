#pragma execution_character_set("gbk") 

/*ÓÃ»ØËÝ·½·¨½â¾ö°Ë»ÊºóÎÊÌâ*/
#include <stdio.h>
int Queenes[8] = { 0 }, Counts = 0;
int Check(int line, int list) {
    //±éÀú¸ÃÐÐÖ®Ç°µÄËùÓÐÐÐ
    for (int i = 0; i < line; i++) {
        //°¤¸öÈ¡³öÇ°ÃæÐÐÖÐ»ÊºóËùÔÚÎ»ÖÃµÄÁÐ×ø±ê
        int data = Queenes[i];
        //Èç¹ûÔÚÍ¬Ò»ÁÐ£¬¸ÃÎ»ÖÃ²»ÄÜ·Å
        if (list == data) {
            return 0;
        }
        //Èç¹ûµ±Ç°Î»ÖÃµÄÐ±ÉÏ·½ÓÐ»Êºó£¬ÔÚÒ»ÌõÐ±ÏßÉÏ£¬Ò²²»ÐÐ
        if ((i + data) == (line + list)) {
            return 0;
        }
        //Èç¹ûµ±Ç°Î»ÖÃµÄÐ±ÏÂ·½ÓÐ»Êºó£¬ÔÚÒ»ÌõÐ±ÏßÉÏ£¬Ò²²»ÐÐ
        if ((i - data) == (line - list)) {
            return 0;
        }
    }
    //Èç¹ûÒÔÉÏÇé¿ö¶¼²»ÊÇ£¬µ±Ç°Î»ÖÃ¾Í¿ÉÒÔ·Å»Êºó
    return 1;
}
//Êä³öÓï¾ä
void print1()
{
    for (int line = 0; line < 8; line++)
    {
        int list;
        for (list = 0; list < Queenes[line]; list++)
            printf("0");
        printf("1");
        for (list = Queenes[line] + 1; list < 8; list++) {
            printf("0");
        }
        printf("\n");
    }
   printf("-----------\n");
}
void eightqueen(int line) {
    //ÔÚÊý×éÖÐÎª0-7ÁÐ
    for (int list = 0; list < 8; list++) {
        //¶ÔÓÚ¹Ì¶¨µÄÐÐÁÐ£¬¼ì²éÊÇ·ñºÍÖ®Ç°µÄ»ÊºóÎ»ÖÃ³åÍ»
        if (Check(line, list)) {
            //²»³åÍ»£¬ÒÔÐÐÎªÏÂ±êµÄÊý×éÎ»ÖÃ¼ÇÂ¼ÁÐÊý
            Queenes[line] = list;
            //Èç¹û×îºóÒ»ÑùÒ²²»³åÍ»£¬Ö¤Ã÷ÎªÒ»¸öÕýÈ·µÄ°Ú·¨
            if (line == 7) {
                //Í³¼Æ°Ú·¨µÄCounts¼Ó1
                Counts++;
                //Êä³öÕâ¸ö°Ú·¨
                print1();
                //Ã¿´Î³É¹¦£¬¶¼Òª½«Êý×éÖØ¹éÎª0 
                Queenes[line] = 0;
                return;
            }
            //¼ÌÐøÅÐ¶ÏÏÂÒ»Ñù»ÊºóµÄ°Ú·¨£¬µÝ¹é
            eightqueen(line + 1);
            //²»¹Ü³É¹¦Ê§°Ü£¬¸ÃÎ»ÖÃ¶¼ÒªÖØÐÂ¹é0£¬ÒÔ±ãÖØ¸´Ê¹ÓÃ¡£
            Queenes[line] = 0;
        }
    }
}
int main005() {
    //µ÷ÓÃ»ØËÝº¯Êý£¬²ÎÊý0±íÊ¾´ÓÆåÅÌµÄµÚÒ»ÐÐ¿ªÊ¼ÅÐ¶Ï
    eightqueen(0);
    printf("°Ú·ÅµÄ·½Ê½ÓÐ%dÖÖ", Counts);
    return 0;
}