#include <stdio.h>

int main()
{
    float num1, num2;

    printf("Ingresa el primer numero: ");
    scanf("%f", &num1);

    printf("Ingresa el segundo numero: ");
    scanf("%f", &num2);

    printf("Suma = %.2f\n", num1 + num2);
    printf("Resta = %.2f\n", num1 - num2);
    printf("Multiplicacion = %.2f\n", num1 * num2);

    return 0;
}
