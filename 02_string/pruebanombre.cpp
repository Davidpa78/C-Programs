
#include <stdlib.h>
#include <stdio.h>

int main(){
    char nombre[256];
    char apellido[256];
    printf("Nombre: ");
    scanf(" %s",nombre);
    printf("Apellido: ");
    scanf(" %s", apellido);
    printf("%s %s.\n",nombre, apellido);
	return EXIT_SUCCESS;
}
