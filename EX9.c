/*Exercício 11 página 42*/
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
int main(){ 
    int num=0; 
    while(num<=0){ 
    printf("Digite um num: \n"); 
    scanf("%i",&num);    
    } 
    if (num>0){ 
    printf("O quadrado do num %i é \n %.1f",num, pow(num,2)); 
    printf("O cubo do num %i é \n %.1f",num, pow(num,3)); 
    printf("O a raiz quadrada do num %i é \n %.1f",num, sqrt(num)); 
    printf("O a raiz cubica do num %i é %.2f",num, cbrt(num)); 
    } 
    return 0; 
} 