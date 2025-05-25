#include <stdio.h>

int potenciaDeDois(int n)
{
    if (n == 0)
    {
        return 1;                       // 2^0 = 1
    }
    
    return 2 * potenciaDeDois(n - 1);   // 2^n = 2 * 2^(n-1)
}

void hanoi(int n, char origem, char aux, char destino)
{
    if (n == 1) // disco 1
    {
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        return;
    }

    // move os n-1 discos para a haste auxiliar
    hanoi(n - 1, origem, destino, aux);

    // move o disco maior restante
    printf("Mover disco %d de %c para %c\n", n, origem, destino);

    // move os n-1 discos da auxiliar para o destino
    hanoi(n - 1, aux, origem, destino);
}

int main()
{
    int num;

    printf("Digite o numero de discos: ");
    scanf("%d", &num);

    printf("Numero minimo de movimentos: %d\n", potenciaDeDois(num) - 1);

    hanoi(num, 'A', 'B', 'C');  // hastes 'A', 'B' e 'C'

    return 0;
}
