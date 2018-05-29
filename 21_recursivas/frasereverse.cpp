
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void imprime (char *letra){
    if(*letra == '\0')
        return;
    else {
        printf("%c ",*letra);
        letra--;
    }
    imprime(letra);
}



int main(){
    char frase [] = "la casa de kalvo";
    char *letra = frase;
    letra += strlen(frase) - 1;
    imprime(letra);
    return EXIT_SUCCESS;
}
