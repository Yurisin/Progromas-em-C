#include <stdio.h>
#include <stdlib.h>
/*Uma pessoa pode se aposentar pelo INSS caso esteja em alguma das situa��es abaixo:
� � do sexo masculino, possui pelo menos 65 anos, e pelo menos 10 anos de contribui��o.
� � do sexo masculino, possui pelo menos 63 anos, e pelo menos 15 anos de contribui��o.
� � do sexo feminino, possui pelo menos 63 anos, e pelo menos 10 anos de contribui��o.
� � do sexo feminino, possui pelo menos 61 anos, e pelo menos 15 anos de contribui��o.
Crie um programa para ler um caracter �M� ou �F� que representa o sexo de um indiv�duo,
ler a sua idade, e seu tempo de contribui��o. O programa dever� ent�o imprimir �Aposent�vel� caso o indiv�duo se enquadrar em uma das situa��es acima. Caso contr�rio o
programa dever� imprimir �N�o Aposent�vel�.
*/


int main()
{
 char M, m, F, f, sexo;
 int idade, contribuicao;

 printf("Informe o sexo do individuo, idade, anos de contribuicao:\n");
 scanf("%c %d %d", &sexo, &idade, &contribuicao);

 if(sexo == 'M' || sexo == 'm'){
    if((idade >= 65) && (contribuicao >= 10)){
            printf("Voce ja pode se aposentar");}
    else if((idade >= 63) && (contribuicao >= 15)){
            printf("Voce ja pode se aposentar");}
    else {
            printf("Voce ainda nao pode se aposentar");}}

if(sexo == 'F' || sexo == 'f'){
    if((idade >= 63) && (contribuicao >= 10)){
            printf("Voce ja pode se aposentar");}
    else if((idade >= 61) && (contribuicao >= 15)){
            printf("Voce ja pode se aposentar");}
    else {
            printf("Voce ainda nao pode se aposentar");}}

}



