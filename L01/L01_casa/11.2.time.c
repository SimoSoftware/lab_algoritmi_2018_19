/********************************************************************
 * Filename     : 11time.c
 * Description  : Calcola intervallo di tempo tra due orari
 * Author       : Simone Palacino
 * modification : 2018/10/12
 * *****************************************************************/
#include <stdio.h>
#include <limits.h>

void main(void){
    
    short ha=15, ma=06, sa=54;
    short hb=17, mb=59, sb=32;
    short time_a, time_b;
    
    time_a = (ha*60+ma)*60+sa;
    time_b = (hb*60+mb)*60+sb;
    
    if(time_a > time_b)
        time_a -= time_b;
    else
        time_a = time_b - time_a;
    
    ha = time_a/3600;
    ma = time_a/60 - ha*60;
    sa = time_a - ma*60 - ha*3600;
    
    printf("%d:%d:%d\n", ha, ma, sa);
    //printf("%d:%d:%d\n", (time_a/3600), (time_a/60-time_a/3600*60), (time_a-(time_a/60-time_a/3600*60)*60)-(time_a/3600)*3600);
}
