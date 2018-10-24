/********************************************************************
 * Filename     : 02toBase10.c
 * Description  : Cambio di base da b a 10.
 * Author       : Simone Palacino
 * modification : 2018/10/24
 * *****************************************************************/
#include <stdio.h>

int main(void){

    int b=0, num=0, n, e=1, base10=0;

    printf("Inserisci un intero b e un numero in base b da convertire in base 10: ");
    scanf("%d %d", &b, &num);
    n = num;

    while(num!=0){
        base10 += num%10 * e;
        num /= 10;
        e *= b;
    }

    printf("Il numero %d in base %d equivale al numero %d in base 10.\n", n, b, base10);

    return 0;
}