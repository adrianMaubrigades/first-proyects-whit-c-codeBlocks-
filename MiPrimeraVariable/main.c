#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int integerA = 1;
    int integerB;
    int integerX;
    int integerY;
    int integerZ;
    float floatA = 1.1;
    float floatB;
    double doubleA = 1.2;
    char letterA = 'A';
    char letterB;

    //comentarios... se imprime la variable integerA
    printf("El valor de nuestro entero A es : %i \n", integerA);

    printf("El valor de mi variable flotante es : %f \n", floatA);

    printf("El valor de la variable double es : %f \n", doubleA);

    printf("El valor de la variable char es : %c \n", letterA);

    printf("Ingresa el valor del entero B: ");
    scanf("%i", &integerB);
    printf("Ingresa el valor de la letra B : ");
    scanf("%c", &letterB); //hay un problema con esta parte, no me quiere leer la letra, lo vere mas adelante.
    printf("Ingresa el valor del floatB : ");
    scanf("%f", &floatB);

    printf("El entero B es: %i \n", integerB);
    printf("El valor de la letra B es: %c \n", letterB);
    printf("El floatB es: %f \n", floatB);

    printf("Ingresa el valor de X");
    scanf("%i", &integerX);
    printf("Ingresa el valor de Y");
    scanf("%i", &integerY);

    //este es el reto de invertir las variables y mostrarlas utilizando una tercera variable auxilar
    integerZ = integerX;
    integerX = integerY;
    integerY = integerZ;

    printf("El entero X invertido es: %i \n", integerX);
    printf("El entero Y invertido es: %i \n", integerY);

    return 0;
}
