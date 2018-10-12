/********************************************************************
 * Filename     : 08draw.c
 * Description  : Draw a "picture"
 * Author       : Simone Palacino
 * modification : 2018/10/11
 * *****************************************************************/
#include <stdio.h>

int main(void){
    int  n = 0;
    char c;
    printf("insert an integer for dimension = ");
    c = getchar();
    n = c - '0';
    
    //figura 1. Righe alternate
    /* la figura è ottenuta alternando righe costituite solo da + e righe
     * costituite solo da o:
     */
    printf("\n1. Righe alternate\n");
    for(int i=0; i<n; i++){
        if(i%2==0)
            c = '+';
        else c = 'o';
        for(int j=0; j<n; j++)
            printf("%c", c);
        printf("\n");
    }
    //figura 2. Caratteri alternati
    /* la figura è ottenuta alternando caratteri o e +:
     */
    printf("\n2. Caratteri alternati\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if( j%2 == i%2 )
                c = 'o';
            else c = '+';
            printf("%c", c);
        }
        printf("\n");
    }
    //figura 3. Triangolo
    /* il triangolo sotto la diagonale con direzione alto/sx verso basso/dx è
     * formato da o, il triangolo sopra la diagonale da +, la diagonale da |.
     */
    printf("\n3. Triangolo\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if( j == i )
                c = '|';
            else if( j > i )
                c = '+';
            else
                c = 'o';
            printf("%c", c);
        }
        printf("\n");
    }
    //figura 4. Spunta
    /* la figura riproduce il simbolo di spunta su uno sfondo di puntini
     * (il ramo di sinistra è formato da 3 asterischi e parte dal bordo
     * sinistro dello schermo, il ramo di destra è formato da n asterischi):
     */
    printf("\n4. Spunta\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n+3-1; j++){
            if( (j == i-n+3) || (j == (n+3-1)-i-1) )
                c = '*';
            else
                c = '.';
            printf("%c", c);
        }
        printf("\n");
    }
    return 0;
}
