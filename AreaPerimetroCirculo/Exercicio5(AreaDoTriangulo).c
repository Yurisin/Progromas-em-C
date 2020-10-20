#include <stdio.h>
#include <stdlib.h>

//Faça um programa que lê o raio de um disco e imprime sua área e seu perímetro

int main()
{
    float raio, area, perimetro;

    printf("Digite o raio da circunferencia:\n");
    scanf("%f", &raio);

    perimetro = (2 * 3.1415 * raio);
    printf("\nO perimetro do disco e:%f\n", perimetro);

    area = (3.1415 * raio * raio);
    printf("\nA area do disco e:%f\n", area);
}
