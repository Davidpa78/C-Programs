
#include <stdlib.h>
#include <stdio.h>

#define N 2
#define C 3
void ver(double a[N][C]){
    printf("\n");
    for (int f=0; f<N; f++){
        for (int c=0; c<C; c++)
            printf("%6.2lf", a[f][c]);
        printf("\n");
    }
    printf("\n");
}

int main(){

    double a[N][C] = {
        {40,3,18},
        {4,2,20}
    }, temp, incognitas[N];
    int indice = N;

    for(int n =0; n<N; n++) {
        temp = a[n][n];
        for (int c=0; c<C; c++)
            a[n][c]= a[n][c]/temp;
        for(int f = n+1; f<N; f++) {
            temp = a[f][n];
            for (int c=0; c<C; c++)
                a[f][c] -= (a[n][c] * temp);
        }
    }

    ver(a);

    for (int i=N-1; i>=0; i--) {
        temp = a[i][i+1];
        if (indice != N)
          temp = a[i][i+2] - incognitas[indice] * temp;
        incognitas[--indice] = temp;
    }

    for (int i =0; i<N; i++)
        printf("La incognita %i vale: %.2f\n",i+1,incognitas[i]);

	 EXIT_SUCCESS;
}
