#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que leia um ano (valor inteiro) e imprima se ele é bissexto ou não. OBS:
São bissexto todos os anos múltiplos de 400. Não sendo múltiplo de 400, são bissextos todos
os anos múltiplos de 4 mas e que não são múltiplos de 100.

*/
int main()
{
int ano;
    printf("Digite o ano para saber se eh ou nao Bissexto:\n");
    scanf("%d", &ano);

if((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0))){
        printf("Ano eh bissexto");
    }
else {
        printf("Ano nao eh Bissexto");
    }
}
