#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main()
{
    printf("Librerias!\n");
    float firstValue = 10;
    float secondValue = 15;
    float result;
    int opcion;

    printf("Soy una calculadora! \n");
    printf("Que operacion deseas realizar? \n");
    printf("1 es suma, 2 es resta\n3 es multiplicacion y 4 division.\nSelecciona tu opcion\n");
    scanf("%i", &opcion);

    switch(opcion)
    {
    case 1:
        result = suma(firstValue, secondValue);
        break;
    case 2:
        result = resta(firstValue, secondValue);
        break;
    case 3:
        result = multiplicacion(firstValue, secondValue);
        break;
    case 4:
        result = division(firstValue, secondValue);
        break;
    }

    printf("El valor es: %f", result);
    return 0;
}
