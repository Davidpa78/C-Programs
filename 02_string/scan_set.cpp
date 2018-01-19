
#include <stdlib.h>
#include <stdio.h>

int main(){
    system("toilet --gay -fpagga NOMBRE");
    char nombre [16];
    char hexadecimal[256];
    int num; 
    printf("Entero: ");
    scanf(" %i", &num);    
    scanf(" %s", nombre);
    printf(" [%i]=> %s.\n", num, nombre);
    printf("Hexadecimal: ");
    scanf(" %[0-9a-fA-F]", hexadecimal);
    printf("0x%sh\n", hexadecimal);
    scanf(" %[^a-f]", hexadecimal);
    scanf(" %[^\n] ", nombre);
    fgets(nombre, 16, stdin);
    scanf("%i/%i/%*i",&dia, &mes,);/* *Caracter de supresión*/
    return EXIT_SUCCESS;
} 
