/********************************************************************
 * Filename     : 06perfectSquare.c
 * Description  : Calcolo primi NN quadrati perfetti.
 * Author       : Simone Palacino
 * modification : 2018/10/12
 * *****************************************************************/
#include <stdio.h>
#include <math.h>
#define NN  10

int main(void){
    for(int i=0; i<NN; i++)
        printf("%d\n", (i+1)*(i+1));
    
    
    return 0;
}
