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
    if (tiene_un_divisor(13,12))
        printf("El 8 tiene un divisor");
    return EXIT_SUCCESS;
}
