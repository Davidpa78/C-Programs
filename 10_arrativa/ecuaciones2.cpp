#include <stdlib.h>
#include <stdio.h>
#define max 100
void ver( int N, int C,double a[max][max] ){
    for (int f=0; f<N; f++){
        for (int c=0; c<C; c++)
            printf("%6.2lf", a[f][c]);
        printf("\n");
    }
    printf("\n");
}

void preguntaIncognitas(int *n, int *c) {
    printf("Numero de incognitas: ");
    scanf("%i",n);
    *c = *n+1;
}

void preguntaDatos(int N, int C,double a[max][max]) {
    for (int f=0; f<N; f++)
        for (int c=0; c<C; c++) {
            printf("Introduce (%i,%i): ",f,c);
            scanf("%lf", &a[f][c]);
        }

}

int main(){
    int N,C;
    preguntaIncognitas(&N,&C);

    double a[max][max], temp, incognitas[N];
    preguntaDatos(N,C,a);
    int index = N;

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



    for (int i=N-1; i>=0; i--) {
        temp = a[i][i+1];
        if (index != N)
            temp = a[i][i+2] - incognitas[index] * temp;
        incognitas[--index] = temp;
    }

    for (int i =0; i<N; i++)
        printf("La incognita %i vale: %.2f\n",i+1,incognitas[i]);

    return EXIT_SUCCESS;
}


