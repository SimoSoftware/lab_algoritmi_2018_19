/********************************************************************
 * Filename     : 02changeOfBase.c
 * Description  : Cambio di base da 10 a b.
 * Author       : Simone Palacino
 * modification : 2018/10/19
 * *****************************************************************/
#include <stdio.h>
#define NMAX 100

int main(void){
    int b, n, cifre=0, newBase[NMAX];

    printf("Inserisci un intero b e un numero in base 10 da convertire in base b: ");
    scanf("%d %d", &b, &n);

    while(n != 0 && cifre<100){
        newBase[cifre] = n%b;
        n /= b;
        cifre++;
    }
    
    printf("Il numero %d in base 10 equivale al numero ", n);
    for(int i=cifre-1; i>=0; i--)
        printf("%d", newBase[i]);
    printf(" in base %d.\n", b);

    return 0;
}
