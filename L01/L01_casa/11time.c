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
    short appo;
    if(!((ha<hb) || ( (ha==hb) && (ma<mb) ) || ( (ha==hb) && (ma==mb) && (sa<sb))) ){
        appo = sb; sb = sa; sa = appo;
        appo = mb; mb = ma; ma = appo;
        appo = hb; hb = ha; ha = appo;
    }
        
    if(sb>sa)
        sa = sb - sa;
    else{
        sa = sa - sb;
        sa = 60 - sa;
        mb -= 1;
    }
    if(mb>ma)
        ma = mb - ma;
    else{
        ma = ma - mb;
        ma = 60 - ma;
        hb -= 1;
    }
    ha = hb - ha;
        
    
    printf("%d:%d:%d\n", ha, ma, sa);
    
}
