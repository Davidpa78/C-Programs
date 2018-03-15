#include <stdio.h>
#include <stdlib.h>
 int main(){
    char finalizador;
    int vector_tamano=0;
    double *m = NULL;
    double dato;
    printf("Introduce un vector: ej (1,2,1,n++)\n");
    scanf(" %*1[[(]");

    do{
       scanf(" %lf",&dato);
       scanf(" %*1[,.]");
       m = (double *) realloc( m, (vector_tamano + 1)* sizeof(double));
        m[vector_tamano++] = dato;
    } while(scanf(" %1[)]", &finalizador) == 0);


    for ( int t=0; t<vector_tamano; t++)
        printf(" %lf", m[t]);
        


 	return EXIT_SUCCESS;
 }
