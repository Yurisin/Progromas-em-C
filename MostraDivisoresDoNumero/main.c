#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int divisorescorretos;
    int divisorespossiveis;

    printf("Informe um valor:");
    scanf("%d", &n);

    printf("\n\nSao divisores os numeros:\n");

    for(divisorespossiveis=2;divisorespossiveis<=n;divisorespossiveis++){
        if(n%divisorespossiveis==0){
            divisorescorretos=divisorespossiveis;
            printf("%d\n", divisorescorretos);
        }
    }
}


