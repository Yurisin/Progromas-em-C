#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;

    printf("Informe o valor de X e Y para a verificacao de quadrante:\n");
    scanf("%f %f", &x, &y);

    if(x > 0 && y > 0) printf("Quadrante 1");
    else if(x < 0 && y > 0) printf("Quadrante 2");
    else if(x < 0 && y < 0) printf("Quadrante 3");
    else if(x > 0 && y < 0) printf("Quadrante 4");
    else if(x == 0) printf("Eixo das abcissas");
    else if(y == 0) printf("Eixo das ordenadas");
    return 0;
}
