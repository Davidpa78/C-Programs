
#include <stdlib.h>
#include <stdio.h>
int es_par(int numero){

    return !(numero % 2);
}

void scaneo (int * numero){

    scanf(" %i", numero);

}

int main(){

    int numero;

   printf ("Que numero es:");
    scaneo(&numero);

    if (es_par(numero))
        printf("Es par.\n");
    else 
        printf("Es impar.\n");
    
	return EXIT_SUCCESS;
}
