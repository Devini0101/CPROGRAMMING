/*Exercício 25 página 50*/ 
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
int main(){ 
    float custo_esp, preco_convite; 
    int qtd_convites; 
    printf("Digite o custo do espaco teatral: R$ "); 
    scanf("%f", &custo_esp); 
    printf("Digite o preco do convite: R$ "); 
    scanf("%f", &preco_convite); 

    qtd_convites = (int) ceil(custo_esp / preco_convite); 
    printf("Quantidade de convites a serem vendidos para cobrir o custo: %d\n", qtd_convites); 
    return 0; 
} 