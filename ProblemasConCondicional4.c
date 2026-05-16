#include <stdio.h>

int main()
{
    int a, b;

    printf("Ingresa dos numeros: ");
    scanf("%d %d", &a, &b);

    if (a % b == 0)
    {
        printf("%d es divisor de %d\n", b, a);
    }
    else if (b % a == 0)
    {
        printf("%d es divisor de %d\n", a, b);
    }
    else
    {
        printf("Ninguno es divisor del otro\n");
    }

    return 0;
}
