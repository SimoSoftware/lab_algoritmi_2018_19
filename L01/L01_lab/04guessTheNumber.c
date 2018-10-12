/********************************************************************
 * Filename     : 04guessTheNumber.c
 * Description  : Indovina il numero
 * Author       : Simone Palacino
 * modification : 2018/10/11
 * *****************************************************************/
#include <stdio.h>
#define TRUE    1


int main(void){
    int n0 = 0, n = 1000;
    int num = (n + n0+1)/2;
    
    printf("Indovina il numero.\n");
    printf("Pensa a un numero in [0, 1000].\n");
    
    while(TRUE){
        char ch;
        printf("Il numero e` %d? ", num);
        do{
            printf("Inserire [ = / < / > ] ==> ");
            scanf(" %c", &ch);
        }while(!(ch == '=' || ch == '<' || ch == '>'));
        
        if(ch == '=')
            break;
        else if(ch == '<'){
            n = num;
            num = (n + n0)/2;
            continue;
        }
        if(ch == '>'){
            n0 = num;
            num = (n + n0 + 1)/2;
            continue;
        }
    }
    
    printf("Il numero e` %d!\n", num);
    
    return 0;
}
