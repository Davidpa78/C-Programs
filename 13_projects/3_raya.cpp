#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <locale.h>
#include <unistd.h>

#define N_MOVES 2
#define Y_GAME 5
#define M 3
#define N 3
enum Jugador {J1, J2};
Jugador jugador = J1;
int tablero[M][N];
int x=0, y=Y_GAME, p =0;
int checkcords(int y, int x) {
    if(x < 0 || y < Y_GAME || x > (N-1)*2 || y > ((M-1)*2) + Y_GAME )
        return 0;
    return 1;
}

void changecords(int ny, int nx) {
    if(checkcords(ny,nx)) {
        x = nx;
        y = ny;
    }

}


void header(){
    mvprintw(0,0,"░▀▀█░░░█▀▀░█▀█░░░█▀▄░█▀█░█░█░█▀█");
    mvprintw(1,0,"░░▀▄░░░█▀▀░█░█░░░█▀▄░█▀█░░█░░█▀█");
    mvprintw(2,0,"░▀▀░░░░▀▀▀░▀░▀░░░▀░▀░▀░▀░░▀░░▀░▀");
}

void ver(int a[M][N]){
    for (int f=0; f<M; f++){
        for (int c=0; c<N; c++)
            mvprintw((f*2) + Y_GAME,c*2,"%i", a[f][c]);
    }
}

void rellena(int a[M][N]) {
    for (int f=0; f<M; f++){
        for (int c=0; c<N; c++)
            a[f][c] = 0;
    }
}
void cambiarJ() {
    erase();
    header();
    ver(tablero);
    jugador = jugador ? J1 : J2;
    mvprintw(4,0,"Jugador: %i",jugador);
    y = Y_GAME;
}
int main(){

    setlocale(LC_ALL,"");
    bool finish = false;
    rellena(tablero);
    initscr();
    noecho();
    keypad(stdscr, TRUE);
    header();
    ver(tablero);
    mvprintw(4,0,"Jugador: %i",jugador);
    move(Y_GAME,0);
    while (!finish) {
        int ch = getch();
        switch(ch) {
            case KEY_UP:
                changecords(y - N_MOVES, x);
                break;
            case KEY_DOWN:
                changecords(y + N_MOVES, x);
                break;
            case KEY_LEFT:
                changecords(y, x - N_MOVES);
                break;
            case KEY_RIGHT:
                changecords(y, x + N_MOVES);
                break;
            case 10:
                int *celda = &tablero[(y- Y_GAME)/2][x/2];
                if(*celda == 0) {
                    *celda = (jugador + 1);
                    cambiarJ();
                }
                break;
        }
        move(y, x);
        refresh();
    }
    endwin();

}

