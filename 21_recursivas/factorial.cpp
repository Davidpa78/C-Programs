

#include <stdlib.h>
#include <stdio.h>

int factorial(int num){
    if (num <= 1)
        return 1;
    return num * factorial(num-1);

}
int main(){
    int num;
    do{
        printf("Introduce el número: ");
        scanf("%i",&num);
    }while(num < 0);

    printf("Factorial de %i = %i\n",num , factorial(num));

    return EXIT_SUCCESS;
}
