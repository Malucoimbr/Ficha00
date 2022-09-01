int main ()
{
    int n, divisor, r, soma1, soma2;
    
    for (n = 2; n <= 1000; n++)
    {        
        soma1 = 1;
        for (divisor = 2; divisor <= n/2; divisor++)
        {            
            if (n % divisor == 0) soma1+=divisor; //calcula a soma dos divisores
        }
        soma2 = 1;
        if (soma1 != n) for (divisor = 2; divisor <= soma1/2; divisor++)
        {            
            if (soma1 % divisor == 0) soma2+=divisor; //calcula a soma dos divisores
        }
        if (soma2 == n) //verificar se a soma dos divisores eh igual ao numero
        {
            printf("\%d e %d sao amigos\n",n, soma1);
        }
        
    }
    
    
    return 0;
}
