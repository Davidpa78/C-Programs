
#include <stdlib.h>
#include <stdio.h>
#define N 0x100
int main(){
    const char *p = "The world is "; //Constante tipo cadena
    /*Pequeña lección sobre punteros
      char const *p; //Puntero a una constante. Forma coherente de decir que el char es const.
      char * const p; //Puntero constante (fijo)
      char const * const p; // puntero fijo a una constante*/
//Puntero: es una variable que contiene una dirección de memoria.
             char frase[N] = "a vampire.\n"//Inicialización
             char *d = frase;
             d = &frase[2];

             frase[2] == 'v'; //Notación de matrices
             *d == 'v'; //Notación de punteros 
             *(d+2)=='m' //el dos está en aritmética de punteros. 
             printf(" d ocupa %lu bytes. \n", sizeof(d));
	return EXIT_SUCCESS;
}
