#include <stdio.h>
#include <stdlib.h>

/*Fa�a um programa que leia os tr�s lados de um tri�ngulo e informe se ele � is�sceles,
escaleno ou equil�tero. OBS: equil�tero: possui os tr�s lados iguais; is�sceles: possui pelo
menos dois lados iguais; escaleno: tr�s lados distintos
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
