#include <stdio.h>
#include <math.h>

int main()
{
    int dividendo, divisor, quociente = 0, resto;
    
    printf("Digite o dividendo");
    scanf("%i", &dividendo);
    printf("Digite o divisor");
    scanf("%i", &divisor);
    
    while (dividendo >= divisor){
        dividendo = dividendo - divisor;
        quociente = quociente + 1;   
        resto = dividendo;
    
    }
    printf("O quociente e: %i\nO resto e: %i!", quociente, resto);

}