#include <stdlib.h>
#include <stdio.h>

bool tiene_un_divisor(int dividendo,int divisor){

    if (divisor == 1)
        return false;
    if (dividendo % divisor == 0)
        return true;
    return tiene_un_divisor(dividendo,divisor-1);
}

int main(){
    int numero;
    printf("Introduce número: ");
    scanf("%i", &numero);
    if (tiene_un_divisor(numero,numero-1))
        printf("El %i tiene al menos un divisor\n",numero);
    else{
        printf("El %i no tiene divisor\n",numero);
    }
    return EXIT_SUCCESS;
}
