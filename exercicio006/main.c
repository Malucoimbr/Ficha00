int main() {
    int a, b, c, menor, maior, intermediario;

    printf("Digite tres valores: ");
    scanf("%d%d%d", &a, &b, &c);

   
    

    // encontrando o menor
    if(a < b){
        if(a < c){
            menor = a;
        }
        else{
            menor = c;
        }
    }
    else{
        if(b < c){
             menor = b;
        }
           
        else{
            menor = c;
        }
    }

    // encontrando o maior
    if(a > b){
        if(a > c){
            maior = a;
        }
        else{
            maior = c;
        }
    }
    else{
        if(b > c){
            maior = b;
        }
        else{
            maior = c;
        }
    }
    
    if ( a > b & a < c){
        intermediario = a;
    }
    
    if (b > a & b < c){
        intermediario = b;
    }
    
    if( c > a & c < b){
        intermediario = c;
        
    }

    printf("Primeira versao\tMenor: %d\tMaior: %d\n intermediario:%d\n" , menor, maior,intermediario);
}
