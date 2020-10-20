#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia os três lados de um triângulo e informe se ele é isósceles,
escaleno ou equilátero. OBS: equilátero: possui os três lados iguais; isósceles: possui pelo
menos dois lados iguais; escaleno: três lados distintos
*/

int main()
{
    float L1, L2, L3;

    printf("Informe os lados do triangulo:\n");
    scanf("%f %f %f", &L1, &L2, &L3);

    if(L1 == L2 && L1 == L3){
        printf("O triangulo eh equilatero");
    }
    else if((L1 == L2 && L2 != L3) || (L1 == L3 && L3 != L2) || (L2 == L3 && L3 != L1)){
        printf("O triangulo eh isosceles");
    }
    else if(L1 != L2 && L1 != L3){
        printf("O triangulo eh escaleno");
    }
 return 0;
}
