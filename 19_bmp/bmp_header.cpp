#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)

typedef struct {
    char      signo[2];
    unsigned  tamano;
    unsigned short reserved1;
    unsigned short reserved2;
    unsigned  data_offset;
} BMPHeader;

typedef struct {
    unsigned int tamano_header;
    unsigned int ancho;
    unsigned int alto;
    unsigned short planos;
    unsigned short bits_pixel;

}BMPDIB;


void show(BMPHeader header,BMPDIB DIBheader) {
    printf("Signature:       %c%c\n",     header.signo[0], header.signo[1]);
    printf("Tamaño:          %i\n",       header.tamano);
    printf("Datos de imagen: %i (%Xh)\n", header.data_offset, header.data_offset);
    printf("Tamaño de la cabecera: %i\n", DIBheader.tamano_header);
    printf("Ancho: %i\n",DIBheader.ancho);
    printf("Alto: %i\n",DIBheader.alto);
    printf("Planos: %i\n",DIBheader.planos);
    printf("Bits por pixel: %i\n",DIBheader.bits_pixel);
}

int main(){
    const char *nombrefichero= "astronauta.bmp";
    FILE *pbmp = NULL;
    BMPHeader header;
    BMPDIB DIBheader;

    if (!(pbmp = fopen(nombrefichero, "r"))){
        fprintf( stderr, "No he encontrado el fichero.\n" );
        return EXIT_FAILURE;
    }
    fread(&header, sizeof(BMPHeader), 1, pbmp);
    fread(&DIBheader,sizeof(BMPDIB), 1,pbmp);

    fclose(pbmp);

    show(header,DIBheader);

    return EXIT_SUCCESS;
}
