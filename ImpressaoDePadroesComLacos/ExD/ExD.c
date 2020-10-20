#include <stdio.h>
#include <stdlib.h>

int main() {
    int i; //linha
    int j; //coluna

    printf("\n\n");

    for (i=0; i<5; i++){
        for (j=0; j<5; j++){

            if(i + j == 4 || i + j == 5 || i + j == 6 || i+j == 7 || i+j ==8){
                printf("# ");
        } else {
       printf("  ");}
    }
printf("\n");
    }
}

