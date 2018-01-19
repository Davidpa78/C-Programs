
#include <stdlib.h>
#include <stdio.h>
#define A 10
int main(){

    for(int c=0; c<A; c++){

        for (int d=0; d<A; d++)
        {
            
            if (A-1-c == d || c == 0 || c == A-1 || d == 0 || d== A-1 || c == d)
            {
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}
