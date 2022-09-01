#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float n1, n2, n3, media;
  
  printf("digite a primeira nota:");
  scanf("%f", &n1);
  printf("digite a segunda nota:");
  scanf("%f", &n2);
  printf("digite a terceira nota:");
  scanf("%f", &n3);
  
  media = (n1+n2+n3)/3;
  
  printf("a sua media é:%.2f", media);
}
