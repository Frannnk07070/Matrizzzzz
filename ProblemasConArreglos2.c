#include <stdio.h>

int main()
{
    int arreglo[10];
    int i, numero, contador = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Ingresa elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    printf("Ingresa el numero a buscar: ");
    scanf("%d", &numero);

    for (i = 0; i < 10; i++)
    {
        if (arreglo[i] == numero)
        {
            contador++;
        }
    }

    printf("El numero aparece %d veces\n", contador);

    return 0;
}
