/********************************************************************
 * Filename     : 02quadraticEq.c
 * Description  : Calcolo soluzioni complesse equazione di 2 grado.
 * Author       : Simone Palacino
 * modification : 2018/10/12
 * *****************************************************************/
#include <stdio.h>
#include <math.h>

int main(void){
    
    int a, b, c;
    float a2, ac4, delta;
    float za, zbi;        //z = a + bi
    char  appo = '+';
    
    printf("Calcolo soluzioni complesse equazione di 2 grado.\n\n");
    
    printf("inserire i 3 coefficienti di un equazione di secondo grado.\n");
    printf("ax^2 + bx + c = 0\n");
    
    printf("a > ");
    scanf("%d", &a);
    printf("b > ");
    scanf("%d", &b);
    printf("c > ");
    scanf("%d", &c);
    
    //printf()
    a2 = 2 * a;
    ac4 = a * c * 4;
    delta = b*b - ac4;
    
    za = -b / a2;
    
    if(delta<0){
        delta = -delta;
        zbi = sqrt(delta)/a2;
        printf("Le soluzioni complesse dell'equazione sono:\n");
        printf("z1 = %'.2f %c %'.2fi\n", za, (zbi>0? appo : ' '), zbi);
        printf("z1 = %'.2f %c %'.2fi\n", za, (zbi>0? ' ' : appo), -zbi);
    }
    
    return 0;
}
