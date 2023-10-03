// Realice un programa que determine si un numero es par o impar
#include <stdio.h>
int main()
{
    int numero;
    printf("Ingrese el numero para saber si es par: ");
    scanf("%d", &numero);
    if ((numero % 2) == 0) // el resto 0 es par
    {
        printf("El dato ingresado es un int par");
    }
    else
        printf("Esto es un dato impar");

    return 0;
}