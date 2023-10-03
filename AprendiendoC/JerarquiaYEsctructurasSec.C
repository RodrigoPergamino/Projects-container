/*
    Jerarquia de operadores
    ()
    !
    ++
    --
    * - / - %
    +   -
    == - != - < - > - <= - >=
    && - ||: (AND y OR);

    (5 / 3) + (2 * 5)
*/

// Estructura secuencial
/*
Accion 1
Accion 2
Accion 3
Cuando queremos ejecutar un programa, el mismo tiene que seguir un
orden, es decir que ejecuta las secuencias una detras de otra.
*/

// Al introducir la edad de una persona, saber si es mayor de edad.

#include <stdio.h>
int main()
{
    int edad; // Cuando solo declaramos el nombre le damos el valor
    printf("Ingrese su edad: ");
    scanf("%d", &edad); // aqui le damos el valor cuando ingresamos
    if (edad >= 18)
    {
        printf("Puedes ingresar al sitio");
    }
    else
        printf("No puedes ingresar");

    return 0;
}