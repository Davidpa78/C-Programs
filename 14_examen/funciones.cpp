

#include <stdlib.h>
#include <stdio.h>

void leer(int *var1,int *var2){

    printf("Primer dato: ");
    scanf(" %i", var1);
    printf("Segundo dato: ");
    scanf(" %i", var2);
}



int main(){

    int dato1;
    int dato2;


    leer(&dato1,&dato2);

    printf("Dato 1 : %i \n", dato1);
    printf("Dato 2 : %i \n", dato2);         

    return EXIT_SUCCESS;

}
