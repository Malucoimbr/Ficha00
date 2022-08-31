#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int time, h, m, s;
  printf("Digite um tempo em segundos: ");
  scanf("%d", &time);
  h = time / 3600;
  m = (time % 3600) / 60;
s = (time % 3600) % 60;
  printf("Quantidade de horas %d\n ", h);

  printf("Minutos: %d\n", m);
  printf("Segundos: %d",s);
  
  //system("PAUSE");	
  return 0;
}
