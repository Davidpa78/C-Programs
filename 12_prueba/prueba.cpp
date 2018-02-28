
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define N 0x100

int main(){
    char variable [N];
    char *puntero = NULL; 
    int longitud;

    printf("Dime tu nombre: ");
    fgets(variable,N,stdin);


    longitud = strlen(variable) - 1;

    puntero = (char *) malloc((longitud + 1) * sizeof(char)); 

    printf("\t %i \n",longitud);

    strncpy(puntero,variable,longitud);
    *(puntero+longitud)='\0';

     printf("Tu nombre es %s \n",puntero);


    free(puntero);


    return EXIT_SUCCESS;
}
