
#include <stdlib.h>
#include <stdio.h>

double suma(double numero1, double numero2){

    return numero1 + numero2;     
}


void leernumero(double *numero){

    scanf(" %lf",numero);
}

int main(){
    double resultado, numero1, numero2;
    system ("toilet -fpagga --gay SUMA");
    printf("Primer número: ");
    leernumero(&numero1);
    printf("Segundo número: ");
    leernumero(&numero2);
    resultado = suma(numero1,numero2);
    printf("Este es el resultado: %.2lf\n", resultado);
    return EXIT_SUCCESS;
}
