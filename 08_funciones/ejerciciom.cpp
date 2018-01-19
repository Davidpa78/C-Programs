
#include <stdlib.h>
#include <stdio.h>

enum eleccion {cuadrado= 1, circulo, }

void menu (int *elegir) {

 
    

    printf(
             "\t 1.Cuadrado.\n"
             "\t 2.Circulo.\n"
             "\t 3.Triangulo.\n"
             "\t 4.Paralelogramo.\n"
             "\t 5.Hexagono.\n"

             );
    printf("Opcion: ");
    scanf(" %i", opcion);

    
}

int main(){

    int opcion;

 menu (opcion);  
       



	return EXIT_SUCCESS;
}
