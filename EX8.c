/*Exercício 10 página 41*/ 
#include <stdio.h> 
#include <stdlib.h> 
int main(){ 
    float area,raio; 
    printf("Qual o raio do círculo?\n"); 
    scanf("%f",&raio); 
    area=3.1415* (raio*raio); 
    printf("A area do circulo é de : %.2f",area); 
    return 0; 
} 