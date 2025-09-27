#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){
    
    /*printf("Digite seu nome:");
    char nome[50];
    scanf("%s",nome);
    printf("olá %s", nome);
    return 0;*/
    int somanotas = 0;
    for (int i = 0;i<=3;i++)
    {
        printf("escreva sua nota na prova %d", i);
        scanf("%d",&somanotas);
        somanotas += somanotas;
    }

    printf("%d",somanotas);
}