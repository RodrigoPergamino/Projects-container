/*
Realice una calculadora que calcule el indice de masa corporal
(imc)

IMC = peso/(alt x alt);
IMC 18.5 - 25 peso saludable;
IMC 25 - 30 -- Sobrepeso;
IMC > 30 ---- Obecidad morbida.
*/
#include <stdio.h>
int main()
{
    float peso, altura;

    printf("Ingrese su peso: ");
    scanf("%f", &peso);

    printf("ingrese su altura: ");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);

    if (imc < 18.5)
    {
        printf("El peso esta por debajo de lo normal");
    }
    else if ((imc >= 18.5) && (imc < 25))
    {
        printf("Tiene un peso saludable");
    }
    else if ((imc >= 25) && (imc < 30))
    {
        printf("Tiene sobrepeso");
    }
    else if (imc >= 30)
    {
        printf("Tiene obesidad");
    }
    printf("\nSu IMC es: %.2f", imc);

    return 0;
};