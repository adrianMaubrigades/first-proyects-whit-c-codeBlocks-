#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos unidimensionales.\n");

    int integerList[3];
    integerList[0] = 4;
    integerList[1] = 5;
    integerList[2] = 6;

    float floatList[] = {23.4, 34.5, 45.6, 21.8, 56.7};
    char charList[4];
    charList[0] = 'A';
    charList[1] = 'd';
    charList[2] = 'r';
    charList[3] = 'i';

    printf("\n Primer entero: \t\t %i", integerList[0]);
    printf("\n Ultimo flotante: \t\t %f", floatList[4]);
    printf("\n Lista de caracteres: \t\t %c%c%c%c.", charList[0], charList[1], charList[2], charList[3]);

    //el reto ahora seria pedir ingresar los 5 numeros de un arreglo y mostrar el producto de todos ellos.

    int listaDeNumeros[5];
    int resultado = 0;

    printf("Ahora haremos un juego, te voy a pedir 5 numeros y luego los multiplicare a todos y te dire el resultado: \n");
    printf("Escribe el primer numero. \n");
    scanf("%i", &listaDeNumeros[0]);
    printf("Escribe el segundo numero. \n");
    scanf("%i", &listaDeNumeros[1]);
    printf("Escribe el tercer numero. \n");
    scanf("%i", &listaDeNumeros[2]);
    printf("Escribe el cuarto numero. \n");
    scanf("%i", &listaDeNumeros[3]);
    printf("Escribe el quinto y ultimo numero. \n");
    scanf("%i", &listaDeNumeros[4]);

    resultado = listaDeNumeros[0] * listaDeNumeros[1] * listaDeNumeros[2] * listaDeNumeros[3] * listaDeNumeros[4];
    printf("El producto de todos los numeros es: %i \n", resultado);

    //con for seria asi

    printf("Multiplicar todos los valores de un arreglo: \n");
    printf("Ingresa los 5 valores: \n");

    int x = 1;
    int intList[5];

    for (int i = 0; i < 5; i++)
    {
        int k = i+1;
        printf("Valor [%i]: ", k);
        scanf("%i", &intList[i]);
        x = intList[i] * x;
    }
    printf("\n El resultado es : \t\t %i", x);

    return 0;
}
