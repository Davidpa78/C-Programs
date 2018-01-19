
#include <stdlib.h>
#include <stdio.h>

int main(){
    int numero;
    printf("Numero: ");
    scanf("%i", &numero);

    if (numero % 2 == 0)  {
        printf("El número %i es par.\n", numero);
        printf("NO me gustan los pares");
    } else
        printf("Impar de mierda\n");

    printf("FIN\n");


	return EXIT_SUCCESS;
}
