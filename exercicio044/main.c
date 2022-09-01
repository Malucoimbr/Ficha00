
#include <stdio.h>
#include <math.h>
float raizquadrada(int numero){
   float result;
   result = pow(numero,0.5);
   return result;
}
int main (){
    float result,numero;
    printf ("Entre com o valor para saber sua raiz quadrada: ");
    scanf ("%f", &numero);
    result = raizquadrada(numero);
    printf ("O valor da raiz quadrada e: %.2f",result);
    getchar ();
    getchar ();
    return 0;
}
