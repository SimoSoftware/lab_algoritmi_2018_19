/********************************************************************
 * Filename     : 05circle.c
 * Description  : Calcolo area cerchio.
 * Author       : Simone Palacino
 * modification : 2018/10/12
 * *****************************************************************/
#include <stdio.h>
#include <math.h>
#define pi_greco  M_PI

int main(void){
    
    float r=0;
    
    printf("Calcolo area cerchio.\n");
    printf("Inserire lunghezza raggio => ");
    scanf("%f", &r);
    
    printf("Area = %'.2f\n", (pi_greco*r*r));
    
    return 0;
}
