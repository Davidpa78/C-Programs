

#include <stdlib.h>
#include <stdio.h>

int suma_div (int num, int div){
    if (div <=0)
        return 0;
    return (num % div == 0 ? div : 0) + suma_div(num, div-1);
}

int main(){

    int num = 10;

    printf("El numero %i tiene unos divisores que suman %i \n", num, suma_div(num,num-1));

    return EXIT_SUCCESS;
}
