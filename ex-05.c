#include <stdio.h>

int mdc(int a, int b)
{
    if (b == 0)             // caso base: quando o segundo número é zero, o MDC é o primeiro número
    {
        return a;
    }

    return mdc(b, a % b);   // algoritmo de Euclides
}

int main()
{
    int num1, num2;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    int resultado = mdc(num1, num2);
    printf("MDC(%d, %d) = %d\n", num1, num2, resultado);
    
    return 0;
}
