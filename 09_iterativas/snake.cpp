//
// Created by david on 22/01/2018.
//
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
                if ( (c == f && cuad % 2 == 0) || ( f+c == l && cuad % 2 != 0 ) )
                    printf("*");
                else
                    printf(" ");
            }
        printf("\n");
    }

    return EXIT_SUCCESS;
}

