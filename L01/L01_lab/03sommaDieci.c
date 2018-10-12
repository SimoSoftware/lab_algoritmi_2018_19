/********************************************************************
 * Filename     : 03sommaDieci.c
 * Description  : Somma di esattamente dieci numeri non nulli
 * Author       : Simone Palacino
 * modification : 2018/10/11
 * *****************************************************************/
#include <stdio.h>
#define  TRUE   1

int main(void){
    int somma = 0,
        in,
        count=0;
        
    printf("Somma di esattamente dieci numeri non nulli.\n");
    printf("Inserire un numero alla volta.\n");
    //scanf("%d\n", &in);
    while(TRUE){
        if(count==10)
            break;
        scanf("%d", &in);
        if(in){
            somma += in;
            count++;
        }
    }
    printf("somma: %d\n", somma);   //non e` richiesta la stampa
    
    return 0;
}
