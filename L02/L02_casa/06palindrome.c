/********************************************************************
 * Filename     : 06palindrome.c
 * Description  : La stringa e` palindroma?
 * Author       : Simone Palacino
 * modification : 2018/10/22
 * *****************************************************************/
#include <stdio.h>
#define MAX     128
#define TRUE    1
#define FALSE   0
#define bool    int

int main(void){
    char    string[MAX];
    int     length=0;
    bool    palind = TRUE;

    printf("Inserire una stringa palindroma:\n");
    scanf("%s", string);

    for(int i=0; i<MAX; i++){
        if(string[i]=='\0'){
            length = i;
            break;
        }
    }

    for(int i=0, j=length-1; i<length/2; i++, j--)
        if(string[i] != string[j])
            palind = FALSE;

    if(palind)
        printf("La stringa e` palindroma.\n");
    else
        printf("La stringa non e` palindroma.\n");

    return 0;
}