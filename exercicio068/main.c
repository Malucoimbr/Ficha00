/*OBS: 67 e 68 são iguais!!!*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, num[6];
   printf("Digite 6 numeros inteiros.\n");

   for(i=0; i<6; i++) {
    printf("Digite o %d valor: ", (i+1));
    scanf("%d", &num[i]);
   }

   printf("Resultado:\n");
   for(i=5; i>=0; i--) {
    printf("%d\n", num[i]);
   }
   return 0;
}

