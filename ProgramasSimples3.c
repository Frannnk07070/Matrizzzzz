#include <stdio.h>

int main()
{
    float dolares, pesos;

    printf("Ingresa la cantidad en dolares: ");
    scanf("%f", &dolares);

    pesos = dolares * 11.96;

    printf("Equivalente en pesos = %.2f\n", pesos);

    return 0;
}
