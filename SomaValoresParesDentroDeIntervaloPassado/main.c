#include <stdio.h>
#include <stdlib.h>

int main(){

    int nA, nB;

    printf("Informe o valor do primeiro numero:\n");
    scanf("%d", &nA);

    printf("Informe o valor do segundo numero:\n");
    scanf("%d", &nB);

    int soma = soma_pares(nA ,nB);

    printf("\n\nA soma dos numeros pares no intervalo entre %d e %d e: %d\n", nA, nB, soma);
}

int soma_pares(int nA,int nB){
    int soma = 0;
    for(int contadora=nA;contadora<= nB;contadora++){
            if(contadora%2 == 0){
              soma += contadora;
            }
    }
    return soma;
}
