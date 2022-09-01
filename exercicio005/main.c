#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, b, c;
    printf("Digite o lado a");
    scanf("%d", &a);
    printf("Digite o lado b");
    scanf("%d", &b);
    printf("Digite o lado c");
    scanf("%d", &c);
    
    if((a == b) && (b==c)){
        printf("Equilátero");
    }else if(a !=b && a!=c && b!=c){
        printf("escaleno");
    }else{
        printf("Isósceles");
    }
      
  }
