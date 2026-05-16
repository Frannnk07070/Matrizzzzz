#include <stdio.h>

int main()
{
    float radio, area, circunferencia;
    const float PI = 3.1416;

    printf("Ingresa el radio: ");
    scanf("%f", &radio);

    area = PI * radio * radio;
    circunferencia = 2 * PI * radio;

    printf("Area = %.2f\n", area);
    printf("Circunferencia = %.2f\n", circunferencia);

    return 0;
}
