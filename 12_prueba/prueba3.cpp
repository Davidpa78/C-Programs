

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define N 0x100


int main(){
    char variable [N];
    char **l; 
    int longitud;

     printf("Dime tu nombre: ");
    fgets(variable,N,stdin);


    longitud = strlen(variable) - 1;


    l = (char **) malloc(sizeof(char)); 
    *l = (char *) malloc((longitud + 1) * sizeof(char));
    printf("\t %i \n",longitud);

    strncpy(*l,variable,longitud);
    *(*l+longitud)='\0';

     printf("Tu nombre es %s \n",*l);

    free(l);
    free(*l);


    return EXIT_SUCCESS;
}
