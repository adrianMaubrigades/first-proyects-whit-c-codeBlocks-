#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Iterador, o bucle seria loop literalmente del ingles a spanish.\n");
    printf("Ingresa un numero que sea el limite de nuestro iterador. \n");
    int limit;

    scanf("%i", &limit);

    int i =1;

    while(i <= limit)
    {
        printf("Numero: %i \n", i);
        i++;
    }

    //reto

    int limiteX, x;

    printf("¿Cuantas veces quiere que apreca el simbolo este # ?");

    scanf("%i", &limiteX);

    x = 1;

    while(x <= limiteX)

    {
       printf("# \n");
       x++;
    }

    return 0;
}
