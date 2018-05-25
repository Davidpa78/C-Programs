#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "bmp.h"

const char *source= "a.bmp";
const char *destin= "b.bmp";


int main(){
    FILE *pbmp = NULL;
    Header header;

    int pixels_x =  697;
    int pixels_y = 1280;
    Color imagen[pixels_x][pixels_y];
    /* Leer el original */
    if (!(pbmp = fopen(source, "r"))){
        fprintf( stderr, "No hay imagen a.bmp de partida.\n" );
        return EXIT_FAILURE;
    }
    fread(&header, sizeof(Header), 1, pbmp);
    fseek(pbmp, header.bmp.data_offset, SEEK_SET);
    fread(imagen, sizeof(Color), pixels_x *pixels_y, pbmp);
    fclose(pbmp);

    /* Escala de grises */
    for (int i=0; i<pixels_x; i++){
        for (int p=0; p<pixels_y;p++){
            char media = (char) sqrt( (imagen[i][p].r * imagen[i][p].r + imagen[i][p].g * imagen[i][p].g + imagen[i][p].b * imagen[i][p].b) ) ;
            imagen[i][p].r = imagen[i][p].g = imagen[i][p].b = (media > 32) ? (char) 255:  0;

        }
    }

for(int i=0; i<pixels_x; i++){
    for(p=0; p<pixels_y; p++){


    }

    /* Escribir la imagen */

    if (!(pbmp = fopen(destin, "r+"))){
        fprintf( stderr, "No hay imagen b.bmp de destino.\n" );
        return EXIT_FAILURE;
    }
    fseek(pbmp, header.bmp.data_offset, SEEK_SET);
    fwrite(imagen, sizeof(Color), pixels_x * pixels_y, pbmp);
    fclose(pbmp);

    return EXIT_SUCCESS;
}
