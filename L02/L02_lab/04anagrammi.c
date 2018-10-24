/********************************************************************
 * Filename     : 04anagrammi.c
 * Description  : Verifica che due parole sono anagrammi.
 * Author       : Simone Palacino
 * modification : 2018/10/24
 * *****************************************************************/
#include <stdio.h>
#include <ctype.h>
#define MAX 128

int main(void){

    char    stringa_uno[MAX];
    char    stringa_due[MAX];
    int     alphabet_uno[26], alphabet_due[26];
    int     length_uno=0, length_due=0;
    
    printf("Inserire due parole\n");
    printf("Parola 1 => ");
    do{
        stringa_uno[length_uno] = getchar();
        stringa_uno[length_uno] = toupper(stringa_uno[length_uno]);
        if(isalpha(stringa_uno[length_uno])){
            length_uno++;
        }
    }while(stringa_uno[length_uno] != '\n');

    printf("Parola 2 => ");
    do{
        stringa_due[length_due] = getchar();
        stringa_due[length_due] = toupper(stringa_due[length_due]);
        if(isalpha(stringa_due[length_due])){
            length_due++;
        }
    }while(stringa_due[length_due] != '\n');

    for(int i=0; i<26; i++){            //inizializzazione array
        alphabet_uno[i] = 0;
        alphabet_due[i] = 0;
    }

    if(length_uno != length_due)
        printf("Le parole hanno lunghezza diversa. Non sono anagrammi\n");
    else{
        int a=0;
        for(int i=0; i<length_uno; i++){
            alphabet_uno[ stringa_uno[i]-'A' ]++;
            alphabet_due[ stringa_due[i]-'A' ]++;
        }

        for(a=0; a<26; a++){
            if(alphabet_uno[a] != alphabet_due[a]){
                printf("Le parole non sono anagrammi.\n");
                break;
            }
        }
        if(a==26) printf("Le parole sono anagrammi.\n");
    }
    
    return 0;
}