
#include <stdlib.h>
#include <stdio.h>

int main(){

      int lado;
      int area;
      int perimetro;

      system("toilet --gay -fpagga CUADRADO");
      /*Entrada de datos*/
      printf("Lado: ");
      scanf("%i", &lado);

      /*Calculos*/
      area = lado * lado;
      perimetro = 4 * lado;
      /*Salida de datos*/
      printf("Area:%i\n"
             "Perimetro:%i\n"
             ,area , perimetro );

	return EXIT_SUCCESS;
}
