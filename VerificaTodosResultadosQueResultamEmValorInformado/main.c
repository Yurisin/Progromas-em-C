#include <stdio.h>
#include <stdlib.h>
/*
Implemente um programa que compute todas as soluções de equações do tipo:
x1 + x2 + x3 + x4 = C
*/
int main()
{
    int x1, x2, x3, x4, c;

    printf("Informe um valor para C: ");
    scanf("%d", &c);

    for (x1=0; x1<=c; x1++)
        for (x2=0; x2<=c; x2++)
            for (x3=0; x3<=c; x3++)
                for (x4=0; x4<=c; x4++)
                    if(x1 + x2 + x3 + x4 == c)
                        printf("%d + %d + %d + %d = %d\n", x1, x2, x3, x4,c);

}
