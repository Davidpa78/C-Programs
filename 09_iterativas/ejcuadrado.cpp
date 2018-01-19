
#include <stdlib.h>
#include <stdio.h>

#define cuadrados 3    //Cuantos cuadrados hace hacia abajo en este caso el problema nos pide 3

bool asteriscos(int f, int c, int T){

    if ((f/T)%2 == 0 && (c/T)%2 == 0 || (f/T)%2 != 0 && (c/T)%2 != 0) //Condición para pintar asteriscos en diagonal
        return 1;

    return 0;
}


int main(){
    int T;

    printf("Introduce las filas: "); //Pedida al usuario
    scanf(" %i", &T);
    int tamano = cuadrados * T;   //Tamaño hasta donde tiene que pintar en diagonal(Es decir última coordenada).

    for (int f=0; f<tamano; f++) {
        for (int c=0; c<tamano; c++)  //Bucle hasta la última coordenada
        {
            if (asteriscos(f,c,T))  //Ejecutamos la función para pintar asteriscos
                printf("*");
            else
            {
                printf(" "); // El resto se rellena con espacios
            }
        }
        printf("\n");    //Salto de línea
    }

    return EXIT_SUCCESS;
}
