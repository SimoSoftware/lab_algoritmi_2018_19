/********************************************************************
 * Filename     : 01cifreReps.c
 * Description  : Verifica se ci sono cifre ripetute in un numero
 * Author       : Simone Palacino
 * modification : 2018/10/23
 * *****************************************************************/
#include <stdio.h>
#define NN  16

typedef struct{
    
} cifre;

int main(void){
    int n=0, cifre=0;
    int n_cifre[NN];
    int cifre_reps[10] = {0,0,0,0,0,0,0,0,0,0};

    printf("Inserire un numero intero. => ");
    scanf("%d", &n);

    for(int i=0; i<NN; i++){
        n_cifre[i] = n%10;
        cifre++;
        n /= 10;
        if(n==0) break;
    }

    for(int i=0; i<cifre; i++)
        cifre_reps[ n_cifre[i] ]++;

    for(int i=0; i<10; i++){
        if(cifre_reps[i]>0){
            printf("Il numero %d e` ripetuto %d volt", i, cifre_reps[i]);
            if(cifre_reps[i]==1)    printf("a.\n");
            else                    printf("e.\n");
        }
    } 

    return 0;
}