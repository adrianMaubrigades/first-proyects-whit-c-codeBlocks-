#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Operadores relacionales, a vale 5 y b vale 10 \n");
    float valA, valB;
    valA = 5;
    valB = 10;

    if(valA < valB)
        printf("Pregunta 1: Verdadero \n");
    else
        printf("Pregunta 1: Falso \n");

    if(valA > valB)
        printf("Pregunta 2: Verdadero \n");
    else
        printf("Pregunta 2: Falso \n");

    if(valA <= valB)
        printf("Pregunta 3: Verdadero \n");
    else
        printf("Pregunta 3: Falso \n");

    if(valA >= valB)
        printf("Pregunta 4: Verdadero \n");
    else
        printf("Pregunta 4: Falso \n");

    if(valA == valB)
        printf("Pregunta 5: Verdadero \n");
    else
        printf("Pregunta 5: Falso \n");

    if(valA != valB)
        printf("Pregunta 6: Verdadero \n");
    else
        printf("Pregunta 6: Falso \n");

    return 0;
}
