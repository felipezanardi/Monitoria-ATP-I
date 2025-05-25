#include <stdio.h>
#include <string.h> // strlen()

int ehPalindromo(char palavra[], int inicio, int fim)
{
    if (inicio >= fim)  // se chegamos ao meio da palavra sem encontrar diferenças
    {
        return 1;       // é um palíndromo
    }
    
    if (palavra[inicio] != palavra[fim])    // se os caracteres forem diferentes
    {
        return 0;                           // não é um palíndromo
    }
    
    return ehPalindromo(palavra, inicio + 1, fim - 1);  // verifica os próximos caracteres, movendo para dentro
}

int main()
{
    char palavra[15];
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    if (ehPalindromo(palavra, 0, strlen(palavra) - 1))
    {
        printf("\"%s\" eh um palindromo!\n", palavra);
    }
    else
    {
        printf("\"%s\" nao eh um palindromo!\n", palavra);
    }
    
    return 0;
}
