#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, media, n3, media2;

    printf("Digite a primeira e segunda nota:");
    scanf("%f%f", &n1,&n2);


    media = n1 + n2;

    if(media >= 70){
        printf("Aprovado!");}

    else if((media <= 69) || (media >= 40)){
       printf("Em exame final\n");
       printf("Digite a nota do exame final:");
       scanf("%f", &n3);

       media2 = media + n3;

       if(media2 >= 100){
        printf("Aprovado");
       }
       else{
        printf("Reprovado");
       }
       }


    else{
        printf("reprovado");
    }
}
