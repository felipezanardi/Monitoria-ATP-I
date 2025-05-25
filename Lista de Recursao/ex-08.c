#include <stdio.h>

int fat(int n)
{
    if (n <= 1)             // caso base: fatorial de 0 ou 1 é 1
    {
        return 1;
    }

    return n * fat(n - 1);  // chamada recursiva: n * fatorial de (n-1)
}

int fatQuadruplo(int n)
{
    int fat2n = fat(2 * n);    // calcula (2n)!
    int fatn  = fat(n);        // calcula n!

    return fat2n / fatn;
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

    printf("Fatorial quadruplo de %d: %d\n", num, fatQuadruplo(num));
    
    return 0;
}
