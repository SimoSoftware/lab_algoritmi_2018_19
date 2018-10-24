/********************************************************************
 * Filename     : 07geo.c
 * Description  : Strutture per figure geometriche
 * Author       : Simone Palacino
 * modification : 2018/10/21
 * *****************************************************************/
#include <stdio.h>

typedef struct punto_t{
    float x;
    float y;
}punto;

struct rettangolo{
    punto vertice;
    punto vertice_opposto;
};

struct cerchio{
    punto centro;
    float raggio;
};

int main(void){

    return 0;
}