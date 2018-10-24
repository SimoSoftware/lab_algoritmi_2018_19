/********************************************************************
 * Filename     : 08date.c
 * Description  : Lista di strutture di date. Stampa date precedenti.
 * Author       : Simone Palacino
 * modification : 2018/10/22
 * *****************************************************************/
#include <stdio.h>
#define MAX 128

typedef struct date{
    int d;
    int m;
    int y;
}date_t;

int main(void){
    date_t  list[MAX];
    int     size=0;
    char    appo[11];
    date_t  last_date;

    printf("Inserire una lista di date [dd/mm/yyyy] (max 128).\n");
    printf("Terminare l'inserimento con \'00/00/0000\'\n");

    for(int i=0; i<MAX; i++){
        scanf("%s", appo);   //non faccio controlli sulla correttenza dell'input
        if(appo[0]=='0' && appo[1]=='0' && appo[3]=='0' && appo[4]=='0' &&
           appo[6]=='0' && appo[7]=='0' && appo[8]=='0' && appo[9]== '0')
            break;
        size++;
        list[i].d = (appo[0]-'0')*10+appo[1]-'0';
        list[i].m = (appo[1]-'0')*10+appo[4]-'0';
        list[i].y = (appo[6]-'0')*1000+(appo[7]-'0')*100+(appo[8]-'0')*10+(appo[9]-'0');
    }

    printf("Inserire ultima data. Verranno stampate tutte le date precedenti a questa.\n");
    scanf("%s", appo);
    last_date.d = (appo[0]-'0')*10+appo[1]-'0';
    last_date.m = (appo[1]-'0')*10+appo[4]-'0';
    last_date.y = (appo[6]-'0')*1000+(appo[7]-'0')*100+(appo[8]-'0')*10+(appo[9]-'0');
    printf("\n");
    for(int i=0; i<size; i++){
        if(list[i].y<last_date.y ||
          (list[i].y==last_date.y && list[i].m<last_date.m) ||
          ((list[i].y==last_date.y && list[i].m==last_date.m) && list[i].d<last_date.d))
            printf("%02d/%02d/%d\n", list[i].d, list[i].m, list[i].y);
    }    

    return 0;
}