#include <stdio.h>

int contarDigitos(int n)
{
    if (n == 0) // quando o número é 0, não adiciona dígito
    {
        return 0;
    }
    
    return 1 + contarDigitos(n / 10);   // divide o número por 10 (removendo o último dígito)
}

int main()
{
    int num;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    int digitos = contarDigitos(num);
    
    printf("O numero %d possui %d digitos!\n", num, digitos);
    
    return 0;
}
