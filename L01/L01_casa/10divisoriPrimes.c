/********************************************************************
 * Filename     : 10divisoriPrimes.c
 * Description  : Divisori, Numeri Primi e scomposizione in fattori
 * Author       : Simone Palacino
 * modification : 2018/10/12
 * *****************************************************************/
#include <stdio.h>
#include <math.h>
#define bool int
#define false 0
#define true 1

int main(void){
    int  n, j, count;
    bool t = false;
    
    printf("Divisori, Numeri Primi e scomposizione in fattori\n\n");
    printf("inserire un numero intero per stampare i suoi divisori => ");
    scanf("%d", &n);
    //stampo divisori decrescenti
    j=n/2;
    while(j>0)
        if(!(n%j--))
            printf("%d\n", j+1);
    //is_a_prime_number?
    for(int i=n/2; i>0; i--){
        if((n%i)==0 && i!=1){
            printf("non e` un numero primo\n");
            break;
        }
        else if(i==1)
            printf("e` un numero primo\n");
    }
    //scomposizione in fattori primi
    for(int i=n; i>1; i--){
        if(!(n%i)){ // se true -> i e` divisore
            for(int j=i/2; j>0; j--){   //verifico che sia primo -> dovrebbe essere
                if((i%j)==0 && j!=1)    //una funzione a se`
                    break;              //
                else if(j==1)           //
                    t = true;           //
            }                           //*******************************
            if(t){                      // <- chiamata dentro questo if
                count = 0;
                while(!(n%i)){
                    count++;
                    n /= i;
                }
                if(count>1)
                    printf("%d^%d\n", i, count);
                else
                    printf("%d\n", i);
            }
        }
    }
    return 0;
}
