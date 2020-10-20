#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;

    printf("\n\n");

    for (j=0; j<5; j++){
        for (i=0; i<5; i++){
            if(i <= j)
                printf("#");
        }
       printf("\n");
    }
printf("\n\n");
}
