/********************************************************************
 * Filename     : 06calendar.c
 * Description  : Calendario mensile
 * Author       : Simone Palacino
 * modification : 2018/10/11
 * *****************************************************************/
#include <stdio.h>

int main(void){
    int mese = 0, giorno=0, count=0, i=0, g;
    char appo;
    
    printf("Calendario mensile.\n\n");
    do{
        printf("Inserisci il numero del mese (1 = gennaio, ..., 12 = dicembre): ");
        appo = getchar();
        mese = appo - '0';
    }while(!(mese>0 && mese<=12));
    appo = getchar();       //flush stdin
    do{
        printf("Inserisci il giorno di inizio mese (1 = lunedi, ..., 7 = domenica): ");
        appo = getchar();
        giorno = appo - '0';
    }while(!(giorno>0 && giorno<=7));
    
    printf("L\tM\tM\tG\tV\tS\tD\n");
    while(1){
        if(count < giorno-1){
            printf("\t");
            count++;
        }
        else
            break;
    }
    giorno = 1;
    switch(mese){
    case 1:
        g = 31;
        break;
    case 2:
        g = 28;
        break;
    case 3:
        g = 31;
        break;
    case 4:
        g = 30;
        break;
    case 5:
        g = 31;
        break;
    case 6:
        g = 30;
        break;
    case 7:
        g = 31;
        break;
    case 8:
        g = 31;
        break;
    case 9:
        g = 30;
        break;
    case 10:
        g = 31;
        break;
    case 11:
        g = 30;
        break;
    case 12:
        g = 31;
        break;
    }
    while(i<g){
        if(count < 7){
            printf("%d\t", giorno);
            giorno++;
            count++;
        }
        if(count == 7){
            printf("\n");
            count = 0;
        }
        i++;
    }
    printf("\n");
    return 0;
}
