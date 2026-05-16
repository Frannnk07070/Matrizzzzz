#include <stdio.h>

int main()
{
    int pares[100];
    int i, numero = 2;

    for (i = 0; i < 100; i++)
    {
        pares[i] = numero;
        numero += 2;
    }

    printf("Primeros 100 numeros pares:\n");

    for (i = 0; i < 100; i++)
    {
        printf("%d ", pares[i]);
    }

    return 0;
}
