#include <stdio.h>
#include <stdlib.h>

int main(){
    char op;
    int n1,n2;
    
    printf("Forneça um operador: ");
    scanf("%c", &op);
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    
    if(op == '+'){
        printf("O total da soma %d", n1 + n2);
    }
    
    if(op == '-'){
        printf("O total da subtracao %d", n1 - n2);
    }
    
    if(op == '*'){
        printf("O resultado da multiplicacao %d", n1 * n2);
    }
    return 0;
    
}
  

if(op = '/'){
        printf("O resultado da divisao %d", n1 / n2);
    }
