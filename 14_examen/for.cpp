

#include <stdlib.h>
#include <stdio.h>
#define N 3

int main(){
    double a[N] = {1,2,3},
           b[N] = {6,5,4};

    double suma = 0;
    for(int i=0; i<N; i++)
        suma+= a[i] * b[i];

    printf("%.2lf\n", suma);
	return EXIT_SUCCESS;
}
