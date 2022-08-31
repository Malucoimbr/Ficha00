#include <stdio.h>
#include <stdlib.h>

void main ()
{
   int Segundos = 0, Velocidade0 = 2;

   while(Segundos < 10){

    Velocidade0 = Velocidade0 * 2;
    Segundos += 1;

    printf("Segundos:%d\n Velocidade:%d\n", Segundos, Velocidade0);


   }
}
