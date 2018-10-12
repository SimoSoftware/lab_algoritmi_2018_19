/********************************************************************
 * Filename     : 02media.c
 * Description  : Calcolo della media di numeri letti in input
 * Author       : Simone Palacino
 * modification : 2018/10/11
 * *****************************************************************/
#include <stdio.h>

int main(void){
    int media = 0,
        in,
        count=0;
    printf("Calcolo della media di numeri letti in input.\n");
    printf("Inserire un numero alla volta. Inserire 0 per terminare.\n");
    
    do{
        scanf("%d", &in);
        media += in;
        count++;
    }while(in != 0);
    
    media /= --count;
    printf("media: %d\n", media); //non e` richiesta la stampa
    
    return 0;
}
