/********************************************************************
 * Filename     : 01somma.c
 * Description  : Calcolo della somma di numeri letti in input
 * Author       : Simone Palacino
 * modification : 2018/10/11
 * *****************************************************************/
#include <stdio.h>

int main(void){
    int sum = 0,
        in;
    printf("Calcolo della somma di numeri letti in input.\n");
    printf("Inserire un numero alla volta. Inserire 0 per terminare.\n");
    
    do{
        scanf("%d", &in);
        sum += in;
    }while(in != 0);
    
    printf("somma: %d\n", sum); //non e` richiesto di stampare la somma.
    
    return 0;
}
