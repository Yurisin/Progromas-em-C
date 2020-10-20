#include <stdio.h>
#include <stdlib.h>
/*Uma pessoa pode se aposentar pelo INSS caso esteja em alguma das situações abaixo:
• É do sexo masculino, possui pelo menos 65 anos, e pelo menos 10 anos de contribuição.
• É do sexo masculino, possui pelo menos 63 anos, e pelo menos 15 anos de contribuição.
• É do sexo feminino, possui pelo menos 63 anos, e pelo menos 10 anos de contribuição.
• É do sexo feminino, possui pelo menos 61 anos, e pelo menos 15 anos de contribuição.
Crie um programa para ler um caracter ’M’ ou ’F’ que representa o sexo de um indivíduo,
ler a sua idade, e seu tempo de contribuição. O programa deverá então imprimir “Aposentável” caso o indivíduo se enquadrar em uma das situações acima. Caso contrário o
programa deverá imprimir “Não Aposentável”.
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



