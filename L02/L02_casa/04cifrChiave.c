/********************************************************************
 * Filename     : 04cifrkey.c
 * Description  : Cifrario di Cesare con chiave di cifratura.
 * Author       : Simone Palacino
 * modification : 2018/10/21
 * *****************************************************************/
#include <stdio.h>
#include <ctype.h>
#define LIMIT 128

int main(void){

    char    text[128];
    char    key[128];
    int     text_length = 0;
    int     key_length = 0;
    int     move=0, j=0;

    printf("Inserire una stringa da cifrare terminata da '.' [max 128 caratteri]\n");

    for(int i=0; i<LIMIT; i++){
        if((text[i] = getchar()) == '.')
            break;
        text_length++;
    }
    text[text_length] = '\0';

    printf("INSERIRE CHIAVE DI CIFRATURA [max 128 caratteri] => ");
    scanf("%s", key);

    for(int i=0; i<LIMIT; i++){
        if(key[i]=='\0')
            break;
        key_length++;
    }

    for(int i=0; i<text_length; i++){
        char upperL, upperK;
        j = j % key_length;
        if( isalpha(text[i]) ){
            upperL = toupper(text[i]);
            upperK = toupper(key[j]);
            move = upperK - 'A';
            for(int t=0; t<move; t++){
                upperL++;
                if(upperL-'A' > 25)
                    upperL = 'A';
            }
            printf("%c", upperL);
            j++;
        }
        else printf("%c", text[i]);
    }
    printf("\n");
    return 0;
}