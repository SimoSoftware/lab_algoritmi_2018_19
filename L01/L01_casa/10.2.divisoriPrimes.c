/********************************************************************
 * Filename     : 10.2.divisoriPrimes.c
 * Description  : Divisori, Numeri Primi e scomposizione in fattori
 * Author       : Simone Palacino
 * modification : 2018/10/12
 * *****************************************************************/
#include <stdio.h>
#include <math.h>
#define bool int
#define false 0
#define true 1
bool is_Prime(int n){
    bool t = false;
    for(int j=n/2; j>0; j--){
        if((n%j)==0 && j!=1)
            break;
        else if(j==1)
            t = true;
    }
    return t;
}
int main(void){
    int  n, j, count;
    
    printf("Divisori, Numeri Primi e scomposizione in fattori\n\n");
    
    printf("inserire un numero intero per stampare i suoi divisori => ");
    scanf("%d", &n);
    
    //stampo divisori decrescenti
    j=n/2;
    count = 0;
    while(j>0)
        if(!(n%j--)){
            count++;
            printf("%d\n", j+1);
        }
    printf("ci sono %d divisori\n\n", count);
    //////////////////////////////////////////////
    
    //is_a_prime_number?
    if(is_Prime(n))
        printf("e` un numero primo\n");
    else
        printf("non e` un numero primo\n");
    /////////////////////////////////////////////
    
    //scomposizione in fattori primi
    for(int i=n; i>1; i--){
        if(!(n%i)){ // se true -> i e` divisore
            if(is_Prime(i)){
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
    /////////////////////////////////////////////
    return 0;
}
