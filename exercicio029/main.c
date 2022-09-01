#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont=0;
    float soma=0, media;

    printf("Digite:");
    scanf("%d", &num);

    while (num >= 0){
        soma += num;

        cont ++;

        scanf("%d", &num);

        media = soma / cont;
    }
    printf("\nMedia: %f\n", media);

    return 0;
}
