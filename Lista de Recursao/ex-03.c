#include <stdio.h>

void inverter(int array[], int size)
{
    if (size == 0)  // não há mais elementos para imprimir
    {
        return;
    }
    printf("%d ", array[size-1]);

    inverter(array, size-1);    // reduz o tamanho do vetor em 1 para avançar para o próximo elemento
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};

    int size = sizeof(array) / sizeof(array[0]); // cálculo para descobrir tamanho do vetor

    printf("Array invertido: ");
    inverter(array, size);

    printf("\n");
    return 0;
}
