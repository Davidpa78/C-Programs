
#include <stdlib.h>
#include <stdio.h>

int main(){

    double *m;

    m = (double *) malloc(sizeof(double));
    *m = 3.5;
    m = (double *) realloc(m, 2 * sizeof(double));
    *(m + 1)= 7.8;
    free(m);

    

	return EXIT_SUCCESS;
}
