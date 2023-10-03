/*Escribe todos los numeros pares entre 1 y 100*/
#include <stdio.h>
int main()
{
    for (int i = 0; i <= 100; i++)
    {
        if ((i % 2) != 0)
        {
            printf("Par\n%d", i);
        }
        else if ((i % 2) == 0)
        {
            printf("Inpar\n%d", i);
        };
    };
    return 0;
}