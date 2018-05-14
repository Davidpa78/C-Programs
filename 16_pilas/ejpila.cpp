#include <stdlib.h>
#include <stdio.h>
#define MAX 10


int error = 0;
const char *mssg[] = {
    "Todo OK.",
    "Pila vacía.",
    "Pila llena."
};

void haz(){
    printf("Que lo que");
}

typedef struct{
    int x;
    int y;
}Coord;

typedef struct{
    Coord pos;
    Coord vel;
    Coord acel;
    void(*haz)();
}Movil;

typedef struct{
    int cima;
    int data[MAX];
}Pila;

bool push(int dato, Pila *pila){
    if (pila->cima >= MAX){
        error = 2;
        return false;
    }
    error = 0;
    pila->data[pila->cima++] = dato;
    return true;
}

int pop(Pila *pila) {
    if (pila->cima == 0){
        error = 1;
        return 0;
    }
    error = 0;
    return pila->data[--pila->cima];
}

 
int main(){

Movil movilillo;






    return EXIT_SUCCESS;
}
