#include <stdio.h>
#include <stdlib.h>
/*
Fa�a um programa que leia um ano (valor inteiro) e imprima se ele � bissexto ou n�o. OBS:
S�o bissexto todos os anos m�ltiplos de 400. N�o sendo m�ltiplo de 400, s�o bissextos todos
os anos m�ltiplos de 4 mas e que n�o s�o m�ltiplos de 100.

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
