/********************************************************************
 * Filename     : 07max.c
 * Description  : Massimo tra due numeri.
 * Author       : Simone Palacino
 * modification : 2018/10/12
 * *****************************************************************/
#include <stdio.h>

int main(void){
    int a, b;
    
    printf("Massimo tra due numeri.\n\n");
    printf("Inserire due numeri\n");
    printf("#1 > ");
    scanf("%d", &a);
    printf("#2 > ");
    scanf("%d", &b);
    
    (a > b) ? printf("Il max e` %d.\n", a) : printf("Il max e` %d.\n", b);
    
    return 0;
}
