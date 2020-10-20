#include <stdio.h>
#include <stdlib.h>


/*Faça um programa que lê um caracter ’F’ ou ’C’, que indica se o próximo número a ser
digitado corresponde a temperatura em Fahrenheit ou Celsius. Em seguida o programa
deve ler o valor da temperatura e então imprimir o valor correspondente da temperatura
na outra unidade de medida. Obs.: (C = 5/9 . (F − 32))*/

int main()
{
    char temp;
    float temperatura, celsius, fahrenheit;

    printf("Digite C para Celsius e F para Fahrenheit\n");
    scanf("%c", &temp);
    printf("Digite uma temperatura:\n");
    scanf("%f", &temperatura);

    if(temp == 'C' || temp == 'c'){
        printf("\nA temperatura escolhida foi %.1f C\n", temperatura);
        fahrenheit = temperatura * 1.8 + 32;
        printf("\nA temperatura em Fahrenheit e %.1f F\n", fahrenheit);

}

    else if(temp == 'F' || temp == 'f'){
        printf("\nA temperatura escolhida foi %.1f F\n", temperatura);
        celsius = (temperatura - 32)/1.8;
        printf("\nA temperatura em Celsius e %.1f C\n", celsius);}

    else if(temp != 'F' || temp != 'c' || temp != 'C' || temp != 'c'){
        printf("ERRO");
    }

}

