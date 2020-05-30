#include <stdio.h>
#include <stdlib.h>

int potencity(int c, int d)
{
    int resu = 1;
    for(int i=0; i<d; i++)
    {
        resu= resu*c;
    }
    return resu;
}

float convertirDolaresPesos(float dolares)
{
    float resu = dolares * 44;
    return resu;
}

float convertirPesosDolares(float pesos)
{
    float resu = pesos / 44;
    return resu;
}

int addition(int a, int b)
{
    int res = a + b;
    return res;
}

int main()
{
    printf("Funciones!. \n");
    int additionRes = addition(3,4);
    printf("Resultado es: %i\n", additionRes);

//reto calcular la potencia, ingresar un valor base y exponente, mostrar el resultado
    printf("\nAhora vamos a hacer el juego de la potencia! \n");
    int c,d;
    printf("Ingresa el valor base: \n");
    scanf("%i", &c);
    printf("Ingresa el valor exponente: \n");
    scanf("%i", &d);
    int r = potencity(c,d);
    printf("\nLa base es %i y su exponente es %i \nEntonces el resultado es: %i", c, d, r);

//ahora el reto de cambiar de moneda, de pesos a dolares y viceversa
    int opcion;
    float cantidad;
    float resultado;

    printf("\nVamos a convertir cantidades de dinero, de pesos a dolares o de dolares a pesos.\n\n");

    printf("1. Convertir de dolares a pesos\n");
    printf("2. Convertir de pesos a dolares\n");
    printf("Ingresa tu opcion: ");
    scanf("%i",&opcion);

    printf("\nIngresa la cantidad que quieres cambiar: ");
    scanf("%f", &cantidad);

    switch(opcion){
    case 1:
        resultado = convertirDolaresPesos(cantidad);
        printf("\nEl resultado es: $%f pesos Uruguayos.", resultado);
        break;
    case 2:
        resultado = convertirPesosDolares(cantidad);
        printf("\nEl resultado es: $%f Dolares Americanos.", resultado);
        break;
    }

    return 0;
}
