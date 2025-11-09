/*Exercício 16 página 45*/ 
#include <stdio.h> 
#include <stdlib.h> 
int main(){ 
    int horastrabalhadas; 
    float salariominimo,salariofinal,imposto,valorhora; 
    printf("Quantas horas voce trabalha?\n"); 
    scanf("%i",&horastrabalhadas); 
    printf("Qual o salário minimo?\n"); 
    scanf("%f",&salariominimo); 
    valorhora=salariominimo/2.0; 
    float salariobruto=valorhora*horastrabalhadas; 
    imposto=salariobruto*(3.0/100.0); 
    salariofinal=salariobruto-imposto; 
    printf("o valor de salario final a receber é de %.2f",salariofinal); 
    return 0; 
} 