

#include <stdlib.h>
#include <stdio.h>

void escaneo (int *numero){

    scanf(" %i", numero);
} 

int main(){

    int l;

    printf("Longitud de diagonal: ");
    escaneo(&l);

    for(int c=0; c<l; c++){ 
        for(int cuad=0; cuad<l;cuad++)
        for (int f=cuad? 1:0; f<l; f++){
            if (c == f)
                printf("*");
            else 
                printf(" ");
        }
        printf("\n");
    }
  
    return EXIT_SUCCESS;
}
