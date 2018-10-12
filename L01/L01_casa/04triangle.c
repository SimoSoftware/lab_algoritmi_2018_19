/********************************************************************
 * Filename     : 04triangle.c
 * Description  : Classificazione triangolo
 * Author       : Simone Palacino
 * modification : 2018/10/12
 * *****************************************************************/
#include <stdio.h>

int main(void){
    int a=0, b=0, c=0;
    
    printf("Inserire 3 lati di un triangolo per classificarlo.\n");
    printf("lato 1: ");
    scanf("%d", &a);
    printf("lato 2: ");
    scanf("%d", &b);
    printf("lato 3: ");
    scanf("%d", &c);
    
    if((!a || !b || !c)  ||  ((a > b+c) || (b > a+c) || (c > a+b)))
        printf("Questo non e` un triangolo.\n");
    else{
        if(a==b && b==c)
            printf("Questo e` un triangolo equilatero.\n");
        else if(a != b && b != c && a != c)
            printf("Questo e` un triangolo scaleno.\n");
        else
            printf("Questo e` un triangolo isoscele.\n");
    }
    return 0;
}
