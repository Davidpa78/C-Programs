
#include <stdlib.h>
#include <stdio.h>

int main(){
    int numero;


    do {
        printf("Dime un número del 1 al 3: ");
        scanf(" %i", &numero);
    } while(numero<1 || numero>3);

    return EXIT_SUCCESS;
}
