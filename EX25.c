/*Exercício 3 página 50*/ 
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
int main(){ 
    float num1, num2, resultado; 
    printf("Digite o primeiro numero: "); 
    scanf("%f", &num1); 
    printf("Digite o segundo numero: "); 
    scanf("%f", &num2); 
    resultado = num1 / num2; 
    printf("Resultado da divisao: %.2f\n", resultado); 

    return 0; 
} 
 