#include <stdio.h>
#include "libpsgraph.h"

void curva(double x, int i){
    if(i==0){
        draw(x);
    }
    else{
        turn(360-60);
        curva(x/3, i-1);
        turn(60*2);
        curva(x/3, i-1);
        turn(360-60);
        curva(x/3, i-1);
    }
}

int main(void){
    double  x;
    int     i;

    printf("inserire lunghezza => ");
    scanf("%f", (float*)&x);
    printf("grado di ricorsione => ");
    scanf("%d", &i);

    start("fiocco.ps");
    curva(x, i);
    end();

    return 0;
}