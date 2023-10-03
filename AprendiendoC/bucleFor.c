/*
    Realice un programa que calcule el promedio de la nota de 10 estudiantes al final de un examen
*/

#include <stdio.h>
int main()
{
    int i, nota, sumaNotas, promedio = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("Ingrese la nota: %d ", i);
        scanf("%d", &nota);
        sumaNotas += nota; // sumaNotas = sumanotas + nota;
    };
    promedio = sumaNotas / 10;
    printf("El promedio total de notas es: %d", promedio);

    return 0;
}