

#include <stdlib.h>
#include <stdio.h>

/*Normaliza la fila n (Div fn/cn)
  Apunto el coeficiente
  Busco los 0 en las columnas n de todas las filas inferiores
  En la fila i le resto ain la fila n*/
#define N 3
int main(){

   double a[N][N]{
       {2,4,6},
       {3,2,1},
       {4,6,3}
   }, p;

    p=a[0][0]; 

   for (int f=0; f<N; f++){
       for (int c=0; c<N; c++)
           if (f == 0) {
             a[f][c]=a[f][c]/p;
             printf("%2f\n",a[f][c]);
           }
    }

    printf("%2f,%2f,%2f",a[0][0],a[0][1],a[0][2]);

    return EXIT_SUCCESS;
}
