

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define N 0x100
int main(){
    char array[N];
    char *puntero = NULL;
    int lenght;

    printf("Dime tu nombre: ");
    fgets(array,N,stdin);
    printf("Tu nombre es %s", array);

    lenght= strlen(array) - 1;

    puntero = (char *) malloc((lenght+1)*sizeof(char));

    strncpy(puntero,array,lenght);

    *(puntero+lenght)= '\0';
 
    free(puntero);






	return EXIT_SUCCESS;
}
