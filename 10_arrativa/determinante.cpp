
#include <stdlib.h>
#include <stdio.h>

#define N 3

int main(){

   int determinante;

        int a[N][N] = {
        {1,3,2},
        {2,4,1},
        {4,5,1}

    };

    determinante = a[0][0]*a[1][1]*a[2][2]+a[1][0]*a[2][1]*a[0][2]+a[0][1]*a[1][2]*a[2][0]-(a[2][0]*a[1][1]*a[0][2]+a[2][1]*a[1][2]*a[0][0]+a[1][0]*a[0][1]*a[2][2]);
            printf("El determinente es  %i\n",determinante);
	return EXIT_SUCCESS;
}


/*
 a[0][0]=1
 a[0][1]=7 
 a[0][2]=9
 a[1][0]=4 
 a[1][1]=2
 a[1][2]=8
 a[2][0]=6
 a[2][1]=5
 a[2][2]=3
 */
