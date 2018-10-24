/********************************************************************
 * Filename     : 01reverse.c
 * Description  : Stampa dalla fine all'inizio una sequenza di numeri
 * Author       : Simone Palacino
 * modification : 2018/10/19
 * *****************************************************************/
#include <stdio.h>
#define NMAX 100

int main(void){
    int a[NMAX];
    int n = 0;

    do{
        scanf("%d", &a[n]);
        n += 1;
    }while(a[n-1] != 0 && n<NMAX);
    
    for(int i=n-2; i>=0; i--)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
