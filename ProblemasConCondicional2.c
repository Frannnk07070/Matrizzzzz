#include <stdio.h>

int main()
{
    float sueldo, nuevo;

    printf("Ingresa el sueldo: ");
    scanf("%f", &sueldo);

    if (sueldo < 1000)
    {
        nuevo = sueldo + (sueldo * 0.15);
    }
    else
    {
        nuevo = sueldo + (sueldo * 0.12);
    }

    printf("Nuevo sueldo = %.2f\n", nuevo);

    return 0;
}
