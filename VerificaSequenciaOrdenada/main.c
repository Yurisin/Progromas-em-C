#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int contadora; //Contagem de numeros que serao verificados
    int n, atual, anterior;
    int ordenado; //Diz se esta em ordem ou nao

    printf("Digite a quantidade de números da sequência: ");
    scanf("%d", &n);


    // primeiro valor é lido fora do laço de repetição
    printf("Digite um valor: ");
    scanf("%d", &anterior);

    ordenado = 1; // assume que a sequencia está ordenada, onde 1 representa verdadeiro
    contadora = 2; // inicia a leitura no segundo núemro, pois o primeiro foi lido fora do while
    while (contadora <= n) {

        printf("Digite um valor: ");
        scanf("%d", &atual);

        if (atual < anterior) {
            ordenado = 0; // digo que a sequencia não está ordenada
        }

        anterior = atual;

        contadora++;
    }


    if (ordenado == 1) {
        printf("A sequência está ordenada!");
    } else {
        printf("A sequência NÃO está ordenada!");
    }

    return 0;
}


