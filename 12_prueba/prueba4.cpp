

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define N 0x100

int main(){

    char nombre [N];
    char **p_nombre;

    int length;

    printf("Escribe tu nombre: ");

    fgets(nombre,N,stdin);

    length= strlen(nombre) - 1;

    printf("%i\n",length);

    p_nombre = (char **) malloc(sizeof(char*));
   *p_nombre = (char *)  malloc(length* sizeof(char));
    strncpy(*p_nombre, nombre,length);

    *(*(p_nombre)+length)= '\0';


   
     printf("Escribe tu apellido: ");

    fgets(nombre,N,stdin);

    length= strlen(nombre) - 1;

    printf("%i\n",length);

    p_nombre = (char **) realloc(p_nombre,2 * sizeof(char*));
   *(p_nombre + 1) = (char *) realloc(*(p_nombre + 1),length * sizeof(char));

    strncpy(*(p_nombre + 1), nombre,length);
    *(*(p_nombre + 1)+length)= '\0';

    printf("Apellido: %s\n",*(p_nombre+1));
    printf("Nombre: %s\n",*(p_nombre));
   





	return EXIT_SUCCESS;
}
