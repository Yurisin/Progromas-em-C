#include <stdio.h>
#include <stdlib.h>

//Fa�a um programa que leia o valor da base e altura de um tri�ngulo e calcule o valor da sua �rea.

int main()
{
    float base, altura, area;
    printf("Digite o tamanho da base do triangulo:\n");
    scanf("%f", &base);

    printf("Digite a altura do triangulo:\n");
    scanf("%f", &altura);

    area = (base * altura)/2;
    printf("A area do triangulo e:%f", area);
}
