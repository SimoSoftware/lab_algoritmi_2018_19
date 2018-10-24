/********************************************************************
 * Filename     : 05delLastChar.c
 * Description  : Elimina le occorrenze dell'ultima lettera
 * Author       : Simone Palacino
 * modification : 2018/10/21
 * *****************************************************************/
#include <stdio.h>
#define LIMIT 100

int main(void){

    char    text[LIMIT];
    char    lastChar;
    int     text_length=0;

    printf("Inserire una stringa di caratteri. Verranno eliminate ");
    printf("tutte le occorrenze dell'ultima lettera.\n");

    for(int i=0; i<LIMIT; i++)
        if((text[i] = getchar())=='\n'){
            text_length = i;
            lastChar = text[i-1];
            break;
        }

    for(int i=0; i<text_length; i++)
        if(text[i] != lastChar)
            printf("%c", text[i]);

    printf("\n");
    return 0;
}