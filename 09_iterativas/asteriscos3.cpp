

#include <stdlib.h>
#include <stdio.h>
#define A 11

int formula(int cord){
    if (A % 2 == 0)
        if (cord == A/2 || cord == (A/2) -1)
            return 1;
    else
        if (cord == A/2) 
          return 1;

    return 0;
}
int main(){

    for(int c=0; c<A; c++){

        for (int d=0; d<A; d++)
        {
            if ( c == 0 || c == A-1 || d == 0 || d == A-1 || formula(c) && formula(d))
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
