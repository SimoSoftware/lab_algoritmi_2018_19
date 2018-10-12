/********************************************************************
 * Filename     : 09sizeOfLimits.c
 * Description  : Stampa dimensione e limiti dei tipi fondamentali
 * Author       : Simone Palacino
 * modification : 2018/10/12
 * *****************************************************************/
#include <stdio.h>
#include <limits.h>

int main(void){
    unsigned short  U_SHORT;
    short           SHORT;
    unsigned int    U_INT;
    int             INT;
    unsigned long   U_LONG;
    long            LONG;
    long long       LLONG;
    char            CHAR;
    unsigned char   U_CHAR;
    
    printf("U_SHORT:\t%d byte. (%d, %d)\n", (int)sizeof(U_SHORT), 0, USHRT_MAX);
    printf("SHORT:  \t%d byte. (%d, %d)\n", (int)sizeof(SHORT), SHRT_MIN, SHRT_MAX);
    printf("U_INT:  \t%d byte. (%d, %d)\n", (int)sizeof(U_INT), 0, UINT_MAX);
    printf("INT:    \t%d byte. (%d, %d)\n", (int)sizeof(INT), INT_MIN, INT_MAX);
    printf("U_LONG: \t%d byte. (%d, %ld)\n", (int)sizeof(U_LONG),0,ULONG_MAX);
    printf("LONG:   \t%d byte. (%ld, %ld)\n", (int)sizeof(LONG), LONG_MIN, LONG_MAX);
    printf("LONGLONG:\t%d byte. (%lld, %lld)\n",(int)sizeof(LLONG),LLONG_MIN, LLONG_MAX);
    printf("U_CHAR: \t%d byte. (%d, %d)\n", (int)sizeof(U_CHAR), 0, UCHAR_MAX);
    printf("CHAR:   \t%d byte. (%d, %d)\n", (int)sizeof(CHAR), SCHAR_MIN, SCHAR_MAX);
    
    
    return 0;
}
