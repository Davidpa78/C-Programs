

#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int rojo;
    int amarillo; 
    int azul;
    
    printf("Número de rojo: ");
    scanf(" %i", &rojo);
    printf("Número de amarillo: ");
    scanf(" %i", &amarillo);
    printf("Número de azul: ");
    scanf(" %i", &azul);
    
    
    printf("Tu color es: ");
    
    if (rojo)
        if (amarillo && azul)
            printf("blanco");
        else if (amarillo)
            printf("naranja");
        else if (azul)
            printf("morado");
        else 
            printf("rojo");
    else if (amarillo)
        if (azul)
            printf("verde");
        else
         printf("amarillo");
    else if (azul)
        printf("azul");
    else 
        printf ("negro");
     
  
    printf("\n");

    return 0;
}

