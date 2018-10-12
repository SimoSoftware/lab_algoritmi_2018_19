/********************************************************************
 * Filename     : 12ConvertTime.c
 * Description  : Converte da formato 24h in AM/PM e viceversa
 * Author       : Simone Palacino
 * modification : 2018/10/12
 * *****************************************************************/

#include <stdio.h>
#define bool    int
#define true    1
#define false   0

int main(void){
    
    short h, m;     //for 24h
    short ha, ma;   //for AM/PM
    bool  A;        //variabile booleana vera se Antimeridiano
    char  appo;
    
    //da 24h to AM/PM/////////////////////////////
    printf("Converte da formato 24h in AM/PM e viceversa\n\n");
    
    printf("inserire ora in formato 24h => ");
    scanf("%d:%d", (int*)&h, (int*)&m);
    
    if(h==0){
        ha = 12;
        A = true;
    }
    else if(h==12){
        ha = 12;
        A = false;
    }
    else if(h>12 && h<24){
        ha = h - 12;
        A = false;
    }
    else{
        ha = h;
        A = true;
    }
    
    printf("Conversion: %02d:%02d %c%c\n", ha, m, (A? 'A' : 'P'), 'M');
    //printf("%02d:%02d %c%c\n", ha, m, (A? 'A' : 'P'), 'M');
    ///////////////////////////////////////////////////////////
    
    //da AM/PM to 24h///////////////////
    printf("inserire ora in formato hh:mm AM/PM => ");
    scanf("%d:%d %cM", (int*)&ha, (int*)&ma, &appo);
    
    if(appo=='A')
        A = true;
    else                //non controllo se formato in input sbagliato
        A = false;      //do per scontato che sia sempre giusto
    
    if(A && ha==12)
        h = 0;
    else if(A || ha==12) //A || (!A && ha==12)
        h = ha;
    else if(!A)
        h = ha + 12;
    
    printf("Conversion: %02d:%02d\n", h, ma);
    //printf("%02d:%02d\n", h, ma);
    //////////////////////////////////////
    
    return 0;
}
