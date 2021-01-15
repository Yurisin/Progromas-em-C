#include <stdio.h>
#include <stdlib.h>

int main()
{
    int escolha;

do{
    printf("$Restaurante$\n");
    printf("1 - Prato 1\n");
    printf("2 - Prato 2\n");
    printf("3 - Prato 3\n");
    printf("4 - Prato 4\n");
    printf("5 - Para fechar o menu\n\n");
    printf("Faca sua escolha:");
    scanf("%d", &escolha);

    if(escolha == 1) printf("\nVoce escolheu o prato 1, boa refeicao!\n\n");
    else if(escolha == 2) printf("\nVoce escolheu o prato 2, boa refeicao!\n\n");
    else if(escolha == 3) printf("\nVoce escolheu o prato 3, boa refeicao!\n\n");
    else if(escolha == 4) printf("\nVoce escolheu o prato 4, boa refeicao!\n\n");
    else if(escolha == 5) printf("\nO menu foi encerrado!\n\n");
    else printf("\nVoce escolheu um prato invalido, refaca o pedido!\n\n");

}

while(escolha != 5);

}



