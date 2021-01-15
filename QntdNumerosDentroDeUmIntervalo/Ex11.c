#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; //Qntde de numeros a serem lidos
    float valor;
    int intervalo1 = 0;
    int intervalo2 = 0;
    int intervalo3 = 0;
    int intervalo4 = 0;
    int contadora =1;

    printf("Quantos numeros serao lidos?");
    scanf("%d", &n);

    while(n>=contadora){

    printf("Qual o valor a ser verificado:\n");
    scanf("%f", &valor);

    if(valor >= 0 && valor <= 25){
     intervalo1++;}
    else if(valor >= 26 && valor <= 50){
     intervalo2++;}
    else if(valor >= 51 && valor <= 75){
     intervalo3++;}
    else if(valor >= 76 && valor <= 100){
     intervalo4++;}
    else printf("Fora dos intervalos!");

    contadora++;
    }

printf("Intervalo 1 [0...25]: %d\n", intervalo1);
printf("Intervalo 2 [26...50]: %d\n", intervalo2);
printf("Intervalo 3 [51...75]: %d\n", intervalo3);
printf("Intervalo 4 [76...100]: %d\n", intervalo4);



}
