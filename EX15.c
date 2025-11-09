/*Exercício 17 página 45*/ 
#include <stdio.h> 
#include <stdlib.h> 
int main(){ 
    float salario, cheque1, cheque2; 
    float saldo, taxa = 0.0038; 
    float desconto1, desconto2; 
    printf("Digite o valor do salario depositado: \n "); 
    scanf("%f", &salario); 
    printf("Digite o valor do primeiro cheque: \n"); 
    scanf("%f", &cheque1); 
    printf("Digite o valor do segundo cheque: \n"); 
    scanf("%f", &cheque2); 
    saldo = salario; 
    desconto1 = cheque1 * taxa; 
    saldo -= (cheque1 + desconto1); 
    desconto2 = cheque2 * taxa; 
    saldo -= (cheque2 + desconto2); 
    printf("Valor descontado CPMF cheque 1: R$ %.2f \n", desconto1); 
    printf("Valor descontado CPMF cheque 2: R$ %.2f \n", desconto2); 
    printf("Saldo final: R$ %.2f\n", saldo); 
    return 0; 
} 