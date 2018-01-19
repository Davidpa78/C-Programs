
#include <stdlib.h>
#include <stdio.h>

int main(){
    int bit1;
    int bit2;

    printf("Introduce bit2: ");
    scanf(" %[0-1]", &bit2);
    printf("Introduce bit1: ");
    scanf(" %[0-1]", &bit1);

    if (bit2== 1 && bit1== 0 )

       printf("Tu numero es 2\n")
      else
         if (bit2 == 0 && bit1 == 1)
             printf("Tu numero es 1\n");
          else
             if (bit2 == 1 && bit1 == 1)

                 printf("Tu numero es 3\n");
              else
                 if (bit2 == 0 && bit1 == 0)
                     printf("Tu numero es 0\n");
                   
                 printf("XD \n"); 
                           

    
	return EXIT_SUCCESS;
}
