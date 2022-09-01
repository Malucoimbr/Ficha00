#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float alturaInic, velocidadeInic, angulo, gravidade, distanciaFinal,tempo,delta;

    printf("Escreva a altura de lançamento: ");

    scanf("%f",&alturaInic);

    printf("\nEscreva a velocidade de inicial: ");

    scanf("%f",&velocidadeInic);

    printf("\nEscreva o angulo de lançamento: ");

    scanf("%f",&angulo);

    gravidade = 9.81;
    delta = pow(velocidadeInic,2)*pow(sin(angulo),2)+2*gravidade*alturaInic;
    distanciaFinal = ((velocidadeInic*cos(angulo))*(velocidadeInic*sin(angulo)*sqrt(delta)))/gravidade;

    printf("\nO projétil atingirá o chão a %.2f metros",distanciaFinal);


    return 0;
}
