/*
    Escriba un programa en el que se pida ingresar numeros entre
    1 y 7. Segun el numero elegido va a representar un dia de las
    semana*/

#include <stdio.h>
int main()
{
    int numeroSem;
    printf("Elige un dia de la semana: ");
    scanf("%d", &numeroSem);
    switch (numeroSem)
    {
    case 1:
        printf("today is monday");
        break;

    case 2:
        printf("today is tuesday");
        break;

    case 3:
        printf("today is wednesday");
        break;

    case 4:
        printf("today is thursday");
        break;

    case 5:
        printf("today is friday");
        break;

    case 6:
        printf("today is saturday");
        break;

    case 7:
        printf("today is sunday");
        break;

    default:
        printf("valor invalido");
    }

    return 0;
}