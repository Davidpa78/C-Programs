
#include <stdlib.h>
#include <stdio.h>

#define N 0x100

typedef struct{
    int data[N];
    int cima;
}Pilila;

void push (int nuevodato,Pilila *lapila){
    lapila->data[lapila->cima] = nuevodato;
    printf("--> %6i\n",lapila->data[lapila->cima]);
    lapila->cima++;
}

int pop(Pilila *lapila){
    lapila->cima--;
    printf("<-- %5i\n",lapila->data[lapila->cima]);
    return lapila->data[lapila->cima];
}


int main(){

    Pilila datosnumericos;
     
    push(6,&datosnumericos);
    push(5,&datosnumericos);
    push(4,&datosnumericos);
    push(-10,&datosnumericos);
    pop(&datosnumericos);
    pop(&datosnumericos);

	return EXIT_SUCCESS;
}
