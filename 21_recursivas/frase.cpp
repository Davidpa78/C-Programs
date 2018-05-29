#include <stdlib.h>
#include <stdio.h>

void imprime (char *letra){
    if(*letra == '\0')
        return;
    else {
        printf("%c ",*letra);
        letra++;
    }
    imprime(letra);
}



int main(){
    char frase [] = "dabale arroz a la zorra el abad";
    char *letra = frase;
    imprime(letra);
    return EXIT_SUCCESS;
}
