// Programa una calculadora de interes compuesto
// Ejemplo de uso
//   Dinero actual: $500.00;
//   Dinero que se agrega anualmente: $1,000,00;
//   cantidad de Años a invertir: 30;
//   interes anual: 10;
//  Resultado: 189,668.13;

#include <stdio.h>
int main()
{
    double dineroActual, adicionAnnual, interesAnnual = 0;
    int anios = 0;
    printf("Ingrese el dinero actual de su inversion: ");
    scanf("%lf", &dineroActual);

    printf("Ingrese el dinero que va a agregar anualmente: ");
    scanf("%lf", &adicionAnnual);

    printf("Ingrese la cantidad de anos de inversion: ");
    scanf("%i", &anios);

    printf("Porcentaje de interes annual: ");
    scanf("%lf", &interesAnnual);

    double total = dineroActual;

    for (int i = 0; i < anios; i++)
    {
        total += 1000; // total = total + 1000;
        total = total + (interesAnnual * total / 100);
    }

    printf("En diez anos tendras un total de: %lf", total);
    return 0;
}