/*Exercício 13 página 43*/ 
#include <stdio.h> 
#include <stdlib.h> 
int main(){ 
    float pes,polegadas,jardas,milhas; 
    printf("insira a medida em pés\n"); 
    scanf("%f",&pes); 
    polegadas=pes*12; 
    jardas=pes*3; 
    milhas=pes*1.760; 
    printf("equivalencia de medidas: \n"); 
    printf("%.1f pes equivalem a %.1f polegadas\n",pes,polegadas); 
    printf("%.1f pes equivalem a %.1f jardas\n",pes,jardas); 
    printf("%.1f pes equivalem a %.1f milhas\n",pes,milhas); 
    return 0; 
} 