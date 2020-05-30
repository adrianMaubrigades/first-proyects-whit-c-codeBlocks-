#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    printf("Entra a la funcion factorial, n vale: %i", n);
    if(n > 1)
    {
        printf("\nLa funcion se llamara a si misma otra vez.\n");
        //tambien esto sirve para buscar algun error en el codigo
        //cada vez que sale este mensaje como bandera o algo.
        return n * factorial(n-1);
    }
    else
    {
        printf("\nn es igual a 1, termina la recursividad \n");
        return 1;
    }
}

int main()
{
    printf("Recursividad\n");

    int result = factorial(5);
    printf("\nEl resultado es: %i", result);

    return 0;
}
