
#include <stdlib.h>
#include <stdio.h>

int main(){
    int numero = 0;
    while (numero < 1 || numero > 3){
    printf("Dale: ");
    scanf("%i", &numero);
    }    
	return EXIT_SUCCESS;
}
