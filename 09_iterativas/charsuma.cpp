

#include <stdlib.h>
#include <stdio.h>
#define N 20

void ver(unsigned array[N]){

    for(int i=0;i<N; i++)
        printf("%u\n", array[N]);
            printf("\n");


}      

int main(){
    unsigned array[N];
    array[1] = array[0] = 1;
        for(int i=2; i<N; i++){

           
            array[i] = array [i-1] + array[i-2];

            ver(array);
            

        }
    printf("\n");





	return EXIT_SUCCESS;
}
