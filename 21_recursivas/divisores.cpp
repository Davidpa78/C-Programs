#include <stdlib.h>
#include <stdio.h>
#define  N 0x100
void Cogerdivisores(int dividendo){

    int contador = 0;
    int divisores[N];

    for( int i = dividendo- 1; i > 1; i--){
        if (dividendo % i == 0){
            divisores[contador] = i;
            contador ++;
        }
    }

    for(int i=0; i<contador; i++)
        printf("Divisor: %i \n", divisores[i]);
}

int main(){


    Cogerdivisores(8);



    return EXIT_SUCCESS;
}
