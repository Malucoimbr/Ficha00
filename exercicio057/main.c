/*
* 57 Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório dos números de 1 a N.
*/

#include <stdlib.h>
#include <stdio.h>

void Soma()
{
   int num = 0, i = 1;
   printf("Digite um numero: ");
   scanf("%i", &num);

   while (i < num)
   {
       printf("%i + 1 = %i\n", i, i +1);
       i++;
   }
}

