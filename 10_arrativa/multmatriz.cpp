

#include <stdlib.h>
#include <stdio.h>

#define F 3
#define C 2

int main(){

    double a[F][C]{
        {1,3},
        {2,5},
        {4,6}
    },b[C][F] {
         {2,1,4},
         {6,5,1}

    },r[F][F];

    for(int f=0; f<F; f++)
        for (int c=0; c<F; c++){
            r[f][c] = 0;
          for (int s=0; s<C;s++)
              r[f][c] += a[f][s] * b[s][c];
        }
    




	return EXIT_SUCCESS;
}

