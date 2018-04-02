#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#define N 0x40
#define CAR_LLENO "▒"
#define CAR_VACIO "░"
#define M 0x10
#define SON_VALIDAS (x>=0 && x>M) && (y>=0 && y<N)
void pintar (int matriz[M][N]){

    for(int fila=0; fila<M; fila++){
        for(int col=0; col<N; col++)
            printf("%s", matriz[fila][col]? CAR_LLENO : CAR_VACIO);
        printf("\n");
    }
}

void poblacion_inicial(int matriz[M][N]){
    int x,y;
    do{

        system("clear");
        printf("Usa unas coordenadas invalidas para terminar.\n");
        pintar(matriz);
        printf("\n\tNuevo x,y: ");
        scanf(" %i, %i",&x,&y);
        x--,y--;

        if (SON_VALIDAS)
            // todo: validar los caracteres antes de meterlo
            matriz[x][y] = 1;
    }while(SON_VALIDAS);
}

int main(){

    int actual[M][N];
    int futuro[M][N];

    bzero(actual,sizeof(actual));

    poblacion_inicial(actual);
//    while(1){
        //Convertir el futuro en actual
  //      pintar(actual);
   // }

    return EXIT_SUCCESS;
}
