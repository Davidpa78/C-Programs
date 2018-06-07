


#include <stdlib.h>
#include <stdio.h>
#define MAX 0x30

typedef struct {
    int data[MAX];
    int cima;

}Pila;

void push(Pila* Pila, int value){
    Pila->data[Pila->cima] = value;
}

int pop (Pila *Pila){
    return Pila->data[Pila->cima--];
}

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
