
#include <stdlib.h>
#include <stdio.h>

// Leer la matriz
//   Leer cada fila
 //    Leer cada columna
//     Si estoy en la fila 1 voy contando el total de columnas sino rellenar con 0s cuando hay menos y descartar los que hay de más.
 // Pasar a la fila siguiente cuando haya un intro. Y terminar si hay dos
int main(){
    int filas = 0, columnas = 0; //Las totales de la matriz
    int columna = 0; //el numero de col de esta fila.
    int last_char = '\0', miradita;
    bool fin = false;
    double nuevo_num;
    double *matriz = NULL;

    do {
        scanf(" %lf", &nuevo_num);
        columnas++;
        columna++;
        matriz = (double *) realloc(matriz, (filas * columnas + columna) * sizeof(double));
        *(matriz+filas*columnas+columna-1) = nuevo_num;
        miradita = getc(stdin);
        if (miradita == '\n'){
            last_char = '\n';
            miradita = getc(stdin);
            if (miradita == '\n')
                fin = true;
            else{
                columna = 0;
                filas ++;
            }
        }
        ungetc(miradita, stdin); 
    } while(!fin);
    /* Ver la matriz*/
    for (int f = 0; f<filas; f++){
        for (int c=0; c<columnas; c++)
            printf("%4.2lf", *(matriz+c+f*columnas));   //Fórmula de direccioneamiento de una matriz
        printf("\n");
    }
	return EXIT_SUCCESS;
}


    //     ----->         4 5 6 5 | 5 4 4 4 | 4 5 6 8 
