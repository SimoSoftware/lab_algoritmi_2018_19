/********************************************************************
 * Filename     : 08alphabeticSort.c
 * Description  : Distanza tra due lettere maiuscole.
 * Author       : Simone Palacino
 * modification : 2018/10/12
 * *****************************************************************/
#include <stdio.h>

int main(void){
    char a, b;
    
    printf("Distanza tra due lettere maiuscole.\n\n");
    printf("Inserire le due lettere.\n");
    printf("#1 > ");
    scanf(" %c", &a);
    printf("#2 > ");
    scanf(" %c", &b);
    
    if( ((a>='A' && a<='Z') && (b>='A' && b<='Z')) )
        printf("%d\n", (a<b)? b-a+1 : a-b+1);
    
    /* IN ALTERNATIVA:
    if( ((a>='A' && a<='Z') && (b>='A' && b<='Z')) ){
        int i;
        if(a<b)
            i = b-a+1;
        else
            i = a-b+1;
        printf("%d\n", i);
    }
    */
    else
        printf("Almeno una lettera e` minuscola");
    
    return 0;
}
