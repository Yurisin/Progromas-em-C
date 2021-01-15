#include <stdio.h>
#include <stdlib.h>
/*
Escreva um programa que lê um número n, e então imprime o menor número primo que é maior ou
igual n, e imprime o maior primo que é menor ou igual a n
*/
int main()
{
    int n, eh_primo;

    printf("Informe um valor: ");
    scanf("%d", &n);

    //Encontra o proximo primo a direita
    for (int i=n; ; i++) {

        //Verifica se "i" eh primo
        eh_primo = 1;
        for (int j=2;j<i; j++){
            if (i % j == 0)
                eh_primo = 0; //nao eh primo, pois a divisao da linha de cima foi possivel ser feita
            }

            //Imprime que o numero avaliado "i" e primop e para a busca com break no for
            if (eh_primo == 1){
                printf("Proximo primo sucessor eh: %d\n", i);
                break;
            }
        }

    //Encontra o proximo primo a esquerda
    for (int i=n;i>0; i--) {

        //Verifica se "i" eh primo
        eh_primo = 1;
        for (int j=2;j<i; j++){
            if (i % j == 0)
                eh_primo = 0; //nao eh primo, pois a divisao da linha de cima foi possivel ser feita
            }

            //Imprime que o numero avaliado "i" e primop e para a busca com break no for
            if (eh_primo == 1){
                printf("Proximo primo sucessor eh: %d\n", i);
                break;
            }
        }


}
