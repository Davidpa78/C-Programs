#include <stdlib.h>
#include <stdio.h>


void escaner(int *numero){

    scanf(" %i", numero);
}

int main(){

    int N;

    printf("Introduce el número del lado: ");
    escaner(&N);
    for(int c=0; c<N; c++){

        for (int f=0; f<N; f++)


         if (c <= f)

            printf("*");



    printf("\n");
    }
    return EXIT_SUCCESS;
}

