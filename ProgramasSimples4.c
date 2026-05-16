#include <stdio.h>

int main()
{
    float dinero, interes, monto;

    printf("Ingresa la cantidad invertida: ");
    scanf("%f", &dinero);

    printf("Ingresa la tasa de interes mensual: ");
    scanf("%f", &interes);

    monto = dinero + (dinero * interes / 100);

    printf("Monto final = %.2f\n", monto);

    return 0;
}
