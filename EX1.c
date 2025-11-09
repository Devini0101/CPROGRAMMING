/*Exercício 1 pág 36, soma das 4 notas*/ 
#include <stdio.h> 
#include <stdlib.h> 
int main(){ 
    int nota, i,soma = 0; 
    for(i=1;i<=4;i++){ 
       printf("Digite a nota %i: ",i); 
       scanf("%i",&nota); 
       soma+=nota; 
    } 
    printf("a soma das notas é %i",soma); 
    return 0; 
} 