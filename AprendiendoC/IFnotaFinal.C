/*
Realice un programa que determine cual es la nota final de un
alumno teniendo en que cuenta que la nota final es el promedio
de dos examenes.(obtener el promedio de los dos examenes)
*/

#include <stdio.h>
int main()
{
    float examen1, examen2;
    float notaFinal;

    printf("Ingrese la nota del primer examen: ");
    scanf("%f", &examen1);
    printf("Ingrese la nota del segundo examen: ");
    scanf("%f", &examen2);

    notaFinal = (examen1 + examen2) / 2;
    printf("Primer examen: %.2f", examen1);
    printf(" Segundo examen: %.2f", examen2);
    printf("\nla nota final es: %.2f", notaFinal);
    return 0;
}