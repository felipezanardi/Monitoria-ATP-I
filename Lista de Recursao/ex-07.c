#include <stdio.h>

void collatz(int n)
{
    printf(" %d", n);       // imprime o número atual da sequência
    
    if (n == 1)             // caso base: se chegou a 1, termina a recursão
    {
        return;
    }
    
    if (n % 2 == 0)         // se o número é par: chama a função com n/2
    {
        collatz(n / 2);
    }
    else                    // se o número é ímpar: chama a função com 3*n+1
    {
        collatz(3 * n + 1);
    }
}

int main()
{
    int num;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    
    if (num <= 0) // verificação de entrada
    {
        printf("Erro: O numero deve ser positivo.\n");
        return 1;
    }
    
    printf("Sequencia de Collatz:");
    collatz(num);

    printf("\n");
    return 0;
}
