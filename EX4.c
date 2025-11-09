/*Exercício 5 página 39*/ 
#include <stdio.h> 
#include <stdlib.h> 
int main(){ 
    float salario,novosalario; 
    int aumento; 
    printf("Qual o salário atual do funcionário?"); 
    scanf("%f",&salario); 
    printf("qual a porcentagem de aumento?"); 
    scanf("%i",&aumento); 
    novosalario=salario* (1+aumento/100.0); 
    printf("O novo salário é de %f \n", novosalario); 
    printf("O salário teve um valor de aumento de %f",novosalario-salario); 
    return 0; 
} 