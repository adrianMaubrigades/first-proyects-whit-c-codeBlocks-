#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos bidimensionales e iteradores. \n");

    int integerArray[4][5];

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<5; j++)
        {
            integerArray[i][j] = ((i+j)*100+j);
            printf("%i, %i : %i \n", i, j, integerArray[i][j]);
        }
    }

// reto, crear un arreglo de 5 x 6 donde el ultimo elemento de las filas sea 0
//calcular el primedio de los primero 5 elementos de cada fila y asignarlo al sexto elemento
//imprimir el promedio de cada fila de calificaciones.

printf("\nArreglos bidimensionales e iteradores. \n");

    int integerArrayX[5][6] = {{6,7,8,9,10,0},
                               {6,7,8,10,6,0},
                               {6,6,8,7,6,0},
                               {6,8,6,7,6,0},
                               {8,10,8,6,8,0}};
    float promedio;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            integerArrayX[i][5] = integerArrayX[i][5] + integerArrayX[i][j];
            printf("La sumatoria del Array [%i] [%i] es: %i \n", i, 5, integerArrayX[i][5]);
        }
        promedio = integerArrayX[i][5] / 5;
        printf("\nEl promedio de la fila %i es : %f \n\n", i, promedio);
    }
    return 0;
}
