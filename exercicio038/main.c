#include <stdio.h>
#include <stdlib.h>

int main ()
{
   float alturaZe = 1.1, alturaChico = 1.5;
   int anos = 0;


   while(alturaChico >= alturaZe){
        alturaZe += 0.03;
        alturaChico += 0.02;

        anos++;

   }
   printf("altura de Chico: %.2f\naltura de Ze: %.2f\nForam precisos %d anos", alturaChico, alturaZe, anos);

}
