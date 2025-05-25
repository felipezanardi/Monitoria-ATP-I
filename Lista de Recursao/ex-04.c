#include <stdio.h>

int fatorialDuplo(int n)
{
    if (n == 1)                         // caso base: se n for 1, retorna 1
    {
        return 1;
    }
    
    return n * fatorialDuplo(n - 2);    // chamada recursiva: n * fatorial duplo de (n-2)
}

int main()
{
    int num;
    
    printf("Digite um numero impar positivo: ");
    scanf("%d", &num);
    
    // verificação (não pode ser negativo e nem par)
    if (num <= 0)
    {
        printf("Erro: O numero deve ser positivo!\n");
        return 1;
    }

    if (num % 2 == 0)
    {
        printf("Erro: O numero deve ser impar!\n");
        return 1;
    }
    
    int resultado = fatorialDuplo(num);
    printf("%d!! = %d\n", num, resultado);
    
    return 0;
}
