#include <stdio.h>

#define N 4

int main()
{
    int tabla[N][N];
    int i, j;

    // Llenar con 1
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            tabla[i][j] = 1;
        }
    }

    // Imprimir matriz original
    printf("Matriz original:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d ", tabla[i][j]);
        }
        printf("\n");
    }

    // Poner en 0 la diagonal principal
    for (i = 0; i < N; i++)
    {
        tabla[i][i] = 0;
    }

    // Imprimir matriz modificada
    printf("\nMatriz con diagonal en 0:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d ", tabla[i][j]);
        }
        printf("\n");
    }

    return 0;
}
