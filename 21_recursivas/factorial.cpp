

#include <stdlib.h>
#include <stdio.h>

long long factorial(long unsigned num){
    if (num <= 1)
        return 1;
    return num * factorial(num-1);

}
int main(){

    long long num;

    do{
        printf("Introduce el número: ");
        scanf("%lld",&num);
    }while (num < 0);
    printf("Factorial de %lld = %lld\n",num , factorial(num));

    return EXIT_SUCCESS;
}
