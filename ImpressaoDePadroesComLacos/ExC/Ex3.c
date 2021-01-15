#include <stdio.h>
#include <stdlib.h>

int main() {
    int i; //linha
    int j; //coluna

    printf("\n\n");

    for (i=0; i<5; i++){
        for (j=0; j<5; j++){

            if(i<=j){
                printf("# ");
        } else {
       printf("  ");}
    }
printf("\n");
    }
}

