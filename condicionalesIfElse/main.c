#include <stdio.h>
#include <stdlib.h>

int main()
{
    int usuarioX;
    int machineX = 5;
    printf("Condicion if, else, else if \n");
    float valA, valB, valC;
    valA = 50;
    valB = 100;
    valC = 150;

    printf("Condicion: \n");

    if(valA == valB)
    {
        printf("No se va a cumplir esa condicion");
    }
    else if(valB == valC)
    {
        printf("Tampoco se va a cumplir esta \n");
    }
    else
    {
        printf("Ninguna condicion se cumplio \n");
        printf("Despues de esta linea el programa va a terminar \n");
    }

//lo siguiente era el reto de adivinar el juego del 1 al 10
    printf("Ahora vas a jugar un juego, escribes un numero del 1 al 10, si aciertas ganas y si no, pues, pierdes... \n");
    scanf("%i", &usuarioX);
    if(usuarioX == machineX)
    {
        printf("Ganaste!! genial! \n El numero era: %i", machineX);
    }
    else
    {
        printf("Perdiste, intenta de nuevo.");
    }

    return 0;
}
