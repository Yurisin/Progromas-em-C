#include <stdio.h>
#include <stdlib.h>

//Fa�a um programa que l� o raio de um disco e imprime sua �rea e seu per�metro

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
