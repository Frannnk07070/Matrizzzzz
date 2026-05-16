#include <stdio.h>

int main()
{
    int arreglo[10];
    int i;
    int positivos = 0, negativos = 0, nulos = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Ingresa elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);

        if (arreglo[i] > 0)
        {
            positivos++;
        }
        else if (arreglo[i] < 0)
        {
            negativos++;
        }
        else
        {
            nulos++;
        }
    }

    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos: %d\n", nulos);

    return 0;
}
