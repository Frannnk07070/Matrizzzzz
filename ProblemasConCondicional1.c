#include <stdio.h>

int main()
{
    float compra, total;

    printf("Ingresa el monto de la compra: ");
    scanf("%f", &compra);

    if (compra > 2500)
    {
        total = compra - (compra * 0.08);
    }
    else
    {
        total = compra;
    }

    printf("Total a pagar = %.2f\n", total);

    return 0;
}
