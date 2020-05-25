#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorA, valorB, valorC;
    valorA = 5;
    valorC = valorB = 10;
    int valorX, valorY, caliAlumno = 0;
    if((valorA < valorB) && (valorB == valorC))
        printf("Se cumplieron las dos condiciones\n");
    else
        printf("no cumplieron las dos condiciones\n");

    if((valorA > valorB) || (valorA <= valorC))
        printf("Se cumplio por lo menos una de las dos condiciones\n");
    else
        printf("no cumplieron las dos condiciones\n \n");


// En esta parte van los retos, el primero es de pedir dos numeros y imprimir el  menor de ellos
//el segundo es pedir la calificacion de un alumno, si es menor que 60, imprimir que repitio, si es mas que aprobo y si es mas de 90 imprimir ademas felicitaciones y carita feliz

    printf("Ahora va un juego, te voy a pedir dos numeros,\n y te voy a mostrar el menor de ellos \n \n");
    printf("Escribeme el primer numero.\n");
    scanf("%i", &valorX);
    printf("Ahora escribe el segundo numero.\n");
    scanf("%i", &valorY);

    if(valorX < valorY)
    {
        printf("El valor mas pequeño es: %i", valorX);
    }
    else
    {
        printf("El valor mas pequeño es: %i", valorY);
    }

    printf("\nAhora te voy a pedir la calificacion de tu alumno del 1 al 100. \n");
    printf("Escribe la calificacion.\n");
    scanf("%i", &caliAlumno);
    if(caliAlumno < 60)
    {
        printf("El alumno repitio. \n");
    }
    else if(caliAlumno <90)
    {
        printf("El alumno aprobo felicidades.");
    }
    else
    {
        printf("Felicidades su alumno aprobo y es excelente!!. n.n");
    }
    return 0;
}
