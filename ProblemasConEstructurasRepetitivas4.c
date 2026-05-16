#include <stdio.h>

int main()
{
    int n, i;
    long long producto = 1;

    printf("Ingresa N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        producto *= i;
    }

    printf("Producto = %lld\n", producto);

    return 0;
}
