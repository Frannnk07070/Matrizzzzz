#include <stdio.h>

int main()
{
    int num, i;
    int positivos = 0, negativos = 0, nulos = 0;

    for (i = 1; i <= 100; i++)
    {
        printf("Ingresa un numero: ");
        scanf("%d", &num);

        if (num > 0)
        {
            positivos++;
        }
        else if (num < 0)
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
