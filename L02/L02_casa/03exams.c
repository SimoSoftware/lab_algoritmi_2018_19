/********************************************************************
 * Filename     : 03exams.c
 * Description  : 5 esami, 5 studenti. Media per ognuno e per esame
 * Author       : Simone Palacino
 * modification : 2018/10/19
 * *****************************************************************/
#include <stdio.h>

int main(void){

    float   esami[5][5],
            media;

    printf("Inserire 5 esami di 5 studenti.\n");
    for(int i=0; i<5; i++){
        printf("Studente n. %d:\n", i+1);
        for(int j=0; j<5; j++){
            printf("Esame n.%d ", j+1);
            scanf("%f", &esami[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0; i<5; i++){
        printf("Media voti studente n.%d: ", i+1);
        media = 0;
        for(int j=0; j<5; j++)
            media += esami[i][j];
        printf("%'.2f\n", (media/5));
    }
    printf("\n");
    for(int j=0; j<5; j++){
        printf("Media voti esame n.%d: ", j+1);
        media = 0;
        for(int i=0; i<5; i++)
            media += esami[i][j];
        printf("%'.2f\n", (media/5));
    }

    return 0;
}
