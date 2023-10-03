#include <stdio.h>
int main()
{
    float ventaCliente, ventaTotal = 0;
    do
    {
        printf("ingrese la venta: ");
        scanf("%f", &ventaCliente);
        ventaTotal + ventaCliente;
    } while (ventaCliente != 0);
    printf("la venta total del dia es: %.2f", ventaTotal);

    return 0;
}