#include <stdio.h>
#include <stdlib.h>

char publicText[] = {"Texto en una variable global.\n"}; //esta si la imprime desde donde sea porque es global


char studentName[50];
float studentMark;

void result()
{
    if(studentMark >= 7)
    {
        printf("Felicitaciones %s aprobaste el curso con %f !! ", studentName, studentMark);
    }
    else
    {
        printf("Fallaste %s, el curso se pasaba con 7 o mas y sacaste %f, sera la proxima.", studentName, studentMark);
    }
}

void check()
{
    printf("\nImprimir desde la funcion : check\n");
    printf("Variable global :");
    printf("%s", publicText);

    printf("Variable local : \n");
    //printf("%s", privateText); esta no va a compilar porque es variable local
}

int main()
{
    printf("Variables globales.\n");
    char privateText[] = {"Texto en una variable local. \n"};

    printf("\nVariable global : ");
    printf("%s", publicText);

    printf("\nVariable local : ");
    printf("%s", privateText);

    check();

    printf("\nAhora el reto del alumno, verificar si aprobo. \n");
    printf("Write his name (student)");
    scanf("%s", &studentName);
    printf("Write his Mark (form his study).");
    scanf("%f", &studentMark);
    result();
    return 0;
}


// reto utilizando variables globales ingresar nombre de alumno y calificacion
//en una funcion evaluar si es aprobado o no
//calificacion minima 7 imprimir si se aprobo o no

