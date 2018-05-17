

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(){
    FILE *mi_tubo;
    int letra;
    int contador =0;
    mi_tubo = fopen("edit.txt","r");
  
    while(letra!=EOF){
        letra = getc(mi_tubo);
        if (letra == 122)
            contador++;
    }
    fclose(mi_tubo);
    printf("Letras a = %i\n",contador);
	return EXIT_SUCCESS;
}
