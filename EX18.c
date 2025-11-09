/*Exercício 20 página 47*/ 
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
int main(){ 
    float angulo_graus, altura, escada; 
    printf("Digite o angulo em graus formado pela escada com o chao:\n "); 
    scanf("%f", &angulo_graus); 
    printf("Digite a altura da parede onde a ponta da escada encosta:\n "); 
    scanf("%f", &altura); 
    float angulo_rad = angulo_graus * 3.14 / 180.0; 
    escada = altura / sin(angulo_rad); 
    printf("A medida da escada e: %.2f\n", escada); 
    return 0; 
} 