#include <stdio.h>

int fatorial(int n)
{
    if (n <= 1)                 // caso base: fatorial de 0 ou 1 é 1
    {
        return 1;
    }
    
    return n * fatorial(n - 1); // chamada recursiva: n * fatorial de (n-1)
}

int superfatorial(int n)
{
    if (n <= 1)                                 // caso base: superfatorial de 1 é 1
    {
        return 1;
    }
    
    return fatorial(n) * superfatorial(n - 1);  // chamada recursiva: fatorial de n * superfatorial de (n-1)
}

int main()
{
    int num;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    
    if (num <= 0)   // verificação de entrada
    {
        printf("Erro: O numero deve ser positivo!\n");
        return 1;
    }
    
    int resultado = superfatorial(num);
    printf("sf(%d) = %d\n", num, resultado);
    
    return 0;
}
