

#include <stdlib.h>
#include <stdio.h>

int main(){
    FILE *mi_tubo;

    mi_tubo = fopen("a.txt","w");

    fprintf(mi_tubo,"Hola Kalvin\n");

    fclose(mi_tubo);

	return EXIT_SUCCESS;
}
