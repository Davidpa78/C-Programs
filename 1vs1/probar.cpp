#include <stdlib.h>
#include <stdio.h>

void lectura(char var1,char var2){

    printf("Introduce un dato: ");
    scanf(" %s", &var1);

    printf("Introduce un dato: ");
    scanf(" %s", &var2);


};




int main(){

    char var1;
    char var2;

lectura(var1,var2);    

printf("Igual a %s", &var1);

	return EXIT_SUCCESS;
}
