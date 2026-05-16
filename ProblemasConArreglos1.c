#include <stdio.h>

int main()
{
    int arreglo[10];
    int i, suma = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Ingresa elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);

        suma += arreglo[i];
    }

    printf("La suma es: %d\n", suma);

    return 0;
}
