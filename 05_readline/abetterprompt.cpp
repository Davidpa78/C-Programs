
#include <stdlib.h>
#include <stdio.h>
#include <readline/readline.h>
#define N 0x100
int main(){
    char buffer[N];

    printf("nombre");
    fgets(buffer, N, stdin);
    readline("Nombre:");
    printf("%s", buffer);

	return EXIT_SUCCESS;
}
