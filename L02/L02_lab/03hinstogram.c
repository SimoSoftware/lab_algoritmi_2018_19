/********************************************************************
 * Filename     : 03hinstogram.c
 * Description  : Stampa un instogramma con le lettere piu utilizzate
 * Author       : Simone Palacino
 * modification : 2018/10/24
 * *****************************************************************/
#include <stdio.h>
#include <ctype.h>
#define MAX 128

int main(void){

    char    stringa[MAX];
    int     alphabet[26];
    int     length=0;
    
    printf("Inserire una frase, verra` analizzata la frequenza delle lettere");
    do{
        stringa[length] = getchar();
        stringa[length] = toupper(stringa[length]);
        if(isalpha(stringa[length])){
            length++;
        }
    }while(stringa[length] != '.');

    for(int i=0; i<26; i++)             //inizializzazione array
        alphabet[i] = 0;
    
    for(int i=0; i<length; i++)
        alphabet[ stringa[i]-'A' ]++;

    for(int i=0; i<26; i++)
        if(alphabet[i]){
            printf("%c ", 'A'+i);
            for(int j=0; j<alphabet[i]; j++)
                printf("*");
            printf("\n");
        }

    return 0;
}