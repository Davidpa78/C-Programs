
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define N 0x100
int main(){
    char **lista = NULL;  // Cuidado con establecer un puntero sin el NULL 
    char buffer[N];
    int len;
    char *algun_sitio = NULL;
    bool yo_quiera = true;

    while(yo_quiera){
        printf("Dime tu nombre: ");
        fgets(buffer, N, stdin);
        len = strlen(buffer);
        algun_sitio = (char *)malloc (len * sizeof(char));
        strncpy(algun_sitio, buffer, len - 1);
        algun_sitio[len] = '\0';
    }
    return EXIT_SUCCESS;
}
