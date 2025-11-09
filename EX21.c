/*Exercício 23 página 49*/ 
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
int main(){ 
    double numero; 
    int parte_inteira; 
    double parte_fracionaria; 
    int arredondado; 
    printf("Digite um numero real: "); 
    scanf("%lf", &numero); 
    parte_inteira = (int) numero; 
    parte_fracionaria = numero - parte_inteira; 
    arredondado = (int) round(numero); 
    printf("Parte inteira: %d\n", parte_inteira); 
    printf("Parte fracionaria: %.2f\n", parte_fracionaria); 
    printf("Arredondamento: %d\n", arredondado); 

    return 0; 
} 