#include <stdio.h>

int main()
{
    float distancia, precio;
    int dias;

    printf("Ingresa la distancia de ida en km: ");
    scanf("%f", &distancia);

    printf("Ingresa dias de estancia: ");
    scanf("%d", &dias);

    precio = (distancia * 2) * 0.23;

    if (dias > 7 && (distancia * 2) > 800)
    {
        precio = precio - (precio * 0.30);
    }

    printf("Precio del ticket = %.2f\n", precio);

    return 0;
}
