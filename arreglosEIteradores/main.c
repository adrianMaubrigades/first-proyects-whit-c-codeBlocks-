#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos e iteradores\n");

    int integerArray[11];

    for(int i = 0; i < 11; i++)
    {
        integerArray[i] = i*i;
        printf("Valor (%i) : %i \n", i, integerArray[i]);
    }


// reto : imprimir el numero mas grande de un arreglo usando arreglos e iteradores.

    printf("Ahora te mostrare el valor mas grande en el arreglo \nPero tu colocaras los valores del arreglo, sera uno facil de 4 numeros. \n");
    int integerArrayX[3];
    for(int e=0; e<4; e++)
    {
        printf("Escribe el numero que sigue del arreglo (%i).", e);
        scanf("%i", &integerArrayX[e]);
    }
    printf("Los numero son: \n.  ");
    for(int e=0; e<4; e++)
    {
        printf(" - %i", integerArrayX[e]);
    }
    printf(".\n ");

    int resultado = 0;
    for(int e=0; e<4; e++)
    {
        if(resultado < integerArrayX[e])
            {
                resultado = integerArrayX[e];
            }
    }
    printf("El numero mas grande es : %i .", resultado);

    return 0;
}
