/*Exercício 6 página 40*/ 
#include <stdio.h> 
#include <stdlib.h> 
int main(){ 
    float salario,novosalario; 
    int gratificacao,imposto; 
    printf("Qual o salário base atual do funcionário?"); 
    scanf("%f",&salario); 
    gratificacao=salario*(5/100.0); 
    imposto=salario*(7/100.0); 
    printf("O novo salário é de %f \n", novosalario=salario+gratificacao-imposto); 
    return 0; 
} 