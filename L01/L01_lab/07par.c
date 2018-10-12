#include <stdio.h>

int main(){
    int     open   = 0,
            close  = 0,
            count  = 0,
            status = 0;
    char c;
    
    do{
        c = getchar();
        count++;
        if(c == '(')
            open++;
        if(c == ')'){
            close++;
            if(close > open){
                status = 2;
                break;
            }
        }
        if(c == '.'){
            if(open == close)
                status = 0;
            else if(open > close)
                status = 1;
        }
    }while(c != '.');
    
    switch( status ){
    case 0:
        printf("La stringa è un'espressione ben parentesizzata\n");
        break;
    case 1:
        printf("La stringa non è un'espressione ben parentesizzata:\n");
        printf("Carattere %d: mancano parentesi chiuse alla fine\n", count-1);
        break;
    case 2:
        printf("La stringa non è un'espressione ben parentesizzata:\n");
        printf("Carattere %d: troppe parentesi chiuse!\n", count);
        break;
    }
    
    return 0;
}
