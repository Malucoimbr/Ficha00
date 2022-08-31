#include<stdio.h>
 
int main() {
 int dividendo, divisor,quociente,x,resto;
  printf("digite o dividendo:");
  scanf("%d", &dividendo);
  printf("digite o divisor:");
  scanf("%d", &divisor);
  
quociente = 0;
x = dividendo;

  while(x >= divisor){
  x = x - divisor;
  quociente = quociente + 1;
  resto = x;
printf("O resto de %d / %d  eh %d", dividendo, resto);
  }
   
}
