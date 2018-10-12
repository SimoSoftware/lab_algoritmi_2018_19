/********************************************************************
 * Filename     : 01temp.c
 * Description  : Conversione da gradi Farenheit a gradi centigradi.
 * Author       : Simone Palacino
 * modification : 2018/10/12
 * *****************************************************************/
#include <stdio.h>

int main(void){
    float temp;
    printf("Conversione da gradi Farenheit a gradi centigradi.\n");
    printf("Temperatura in gradi Farenheit: ");
    scanf("%f", &temp);
    
    //formula : (32°F − 32) × 5/9 = 0°C
    printf("temp %'.1f^F = %'.1f^C\n", temp, ( (temp-32)*(5/9.) ) );
    return 0;
}
