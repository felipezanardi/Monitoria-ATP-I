#include <stdio.h>

int calcularPotencia(int n, int k)
{
    if (k == 0)                             // caso base: qualquer número elevado a zero é 1
    {
        return 1;
    }

    return n * calcularPotencia(n, k-1);    // chamada recursiva: n^k = n * n^(k-1)
}                                           // cada chamada reduz k em 1 até chegar ao caso base (k=0)

int main()
{
    int n, k;

    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    printf("Digite o valor de k: ");
    scanf("%d", &k);

    int resultado = calcularPotencia(n, k);
    printf("%d^%d = %d\n", n, k, resultado);

    return 0;
}