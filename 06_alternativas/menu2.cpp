
#include <stdlib.h>
#include <stdio.h>

const char *opcion[] = {
    "Triángulo",
    "Cuadrado",
    "Paralelogramo",
    "Pentágono",
    "Círculo",
    NULL
};

int main(){
 
    unsigned eleccion;

    system("toilet --gay -fpagga AREAS");

    printf(
            "Elige la figura: \n"
            "\n"
            "\t1. Triángulo.\n"
            "\t2. Cuadrado.\n"
            "\t3. Paralelogramo.\n"
            "\t4. Pentágono.\n"
            "\t5. Círculo.\n"
            "\n"
            "\t Opción: "
            );
    scanf(" %u", &eleccion);
        switch(eleccion) {
            case 1:
                printf("Triángulo △ \n");
                break;
            case 2:
                printf("Cuadrado □ \n");
                break;
            case 3:
                printf("Paralelogramo ▱ \n");
                break;
            case 4:
                printf("Pentágono ⬠ \n");
                break;
            case 5:
                printf("Círculo ○ \n");
                break;
            default:
             printf("Del 1 al 5 borrico\n");
          break;   

        }
	return EXIT_SUCCESS;
}
