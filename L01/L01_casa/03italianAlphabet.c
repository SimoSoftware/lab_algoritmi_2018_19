/********************************************************************
 * Filename     : 03italianAlphabet.c
 * Description  : Is this a letter from italian alphabet?
 * Author       : Simone Palacino
 * modification : 2018/10/12
 * *****************************************************************/
#include <stdio.h>
#include <ctype.h>

int main(void){
    char c;
    
    printf("Is this a letter from italian alphabet?\n");
    printf("Insert a letter => ");
    scanf("%c", &c);
    
    if(!(c>='a' && c<='z'))
        printf("Hai inserito un carattere che non e` dell'alfabeto italiano\n");
    else{
        if(c>='A' && c<='Z')
            c = tolower(c);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            printf("Hai inserito una vocale.\n");
        else if(c == 'j' || c == 'k' || c == 'w' || c == 'x' || c == 'y')
            printf("Hai inserito un carattere che non e` dell'alfabeto italiano\n");
        else
            printf("Hai inserito una consonante.\n");
    }
    return 0;
}
