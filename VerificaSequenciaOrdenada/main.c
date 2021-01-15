#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int contadora; //Contagem de numeros que serao verificados
    int n, atual, anterior;
    int ordenado; //Diz se esta em ordem ou nao

    printf("Digite a quantidade de n�meros da sequ�ncia: ");
    scanf("%d", &n);


    // primeiro valor � lido fora do la�o de repeti��o
    printf("Digite um valor: ");
    scanf("%d", &anterior);

    ordenado = 1; // assume que a sequencia est� ordenada, onde 1 representa verdadeiro
    contadora = 2; // inicia a leitura no segundo n�emro, pois o primeiro foi lido fora do while
    while (contadora <= n) {

        printf("Digite um valor: ");
        scanf("%d", &atual);

        if (atual < anterior) {
            ordenado = 0; // digo que a sequencia n�o est� ordenada
        }

        anterior = atual;

        contadora++;
    }


    if (ordenado == 1) {
        printf("A sequ�ncia est� ordenada!");
    } else {
        printf("A sequ�ncia N�O est� ordenada!");
    }

    return 0;
}


