#include <stdio.h>
int main()
{
    int contador = 0;
    do
    {
        contador++;
    } while (contador < 10);

    printf("Contador = %d", contador);

    return 0;
};