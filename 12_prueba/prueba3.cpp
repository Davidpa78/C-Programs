

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define N 0x100


int main(){
    char variable [N];
    char **l = NULL;
    int longitud;




    printf("Dime tu nombre: ");
    fgets(variable,N,stdin);
    longitud = strlen(variable) - 1;

    l = (char **) malloc(sizeof(char *));
    *l = (char *) malloc((longitud + 1) * sizeof(char));
    printf("\t %i \n",longitud);

    strncpy(*l,variable,longitud);
    *(*l+longitud)='\0';








    printf("Dime tu nombre: ");
    fgets(variable,N,stdin);
    longitud = strlen(variable) - 1;

    l = (char **) realloc(l, 2*sizeof(char *));
    *(l+1) = (char *) realloc(*(l+1),(longitud + 1) * sizeof(char));
    printf("\t %i \n",longitud);

    strncpy(*(l+1),variable,longitud);
    *(*(l+1)+longitud)='\0';









    printf("Dime tu nombre: ");fgets(variable,N,stdin);
    longitud = strlen(variable) - 1;
    
    l = (char **) realloc(l,3*sizeof(char *));
    *(l+2) = (char *) realloc(*(l+2), (longitud + 1)* sizeof(char));
    printf("\t %i \n",longitud);
    
    strncpy(*(l+2),variable,longitud);
    *(*(l+2)+longitud)='\0';







    printf("Dime tu nombre: ");
    fgets(variable,N,stdin);
    longitud = strlen(variable) - 1;

    l = (char **) realloc(l,4*sizeof(char *));
    *(l+3) = (char *) realloc(*(l+3), (longitud + 1)* sizeof(char));
    printf("\t %i \n",longitud);

    strncpy(*(l+3),variable,longitud);
    *(*(l+3)+longitud)='\0';






    printf("Dime tu nombre: ");
    fgets(variable,N,stdin);
    longitud = strlen(variable) - 1;

    l = (char **) realloc(l,5*sizeof(char *));
    *(l+4) = (char *) realloc(*(l+4), (longitud + 1)* sizeof(char));
    printf("\t %i \n",longitud);

    strncpy(*(l+4),variable,longitud);
    *(*(l+4)+longitud)='\0';






    printf("Tu nombre es %s \n",*l);
    printf("Tu nombre es %s \n",*(l+1));
    printf("Tu nombre es %s \n",*(l+2));
    printf("Tu nombre es %s \n",*(l+3));
    printf("Tu nombre es %s \n",*(l+4));

    free(l);
    free(*(l+1));
    free(*(l+2));
    free(*(l+3));
    free(*(l+4));
    free(*l);

    return EXIT_SUCCESS;
}
