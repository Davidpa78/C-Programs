

#include <stdlib.h>
#include <stdio.h>

int elevar(int base,int exponente){

    if ( exponente == 1)
        return base;
    else if (exponente == 0)
        return 1;
    else 
        return base * elevar(base,exponente-1);

}

int main(){
    int base = 2;
    int exponente = 4;

    printf("%i elevado a %i es %i",base,exponente,elevar(base,exponente));
	return EXIT_SUCCESS;
}
