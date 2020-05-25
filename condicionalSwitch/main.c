#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Condicional switch, escribe un numero entero del 1 al 3. \n");
    int option, caminoX;

    scanf("%i", &option);

    switch(option)
    {
    case 1:
        printf("Elegiste el numero 1. \n");
        break;
    case 2:
        printf("Elegiste el numero 2. \n");
        break;
    case 3:
        printf("Elegiste el numero 3. \n");
        break;
    default:
        printf("Elegiste una opcion invalida. \n");
        break;
    }
//aqui comienza el reto de hacer un pequeño juego de 3 caminos y imprimir cual sale segun el numero elegido.

    printf("Ahora empieza otro juego, elige cual camino quieres elegir: \n el camino nº1 es un camino por el bosque. \n el camino nº2 es un camino hacia el sotano. \n el camino nº3 es perseguir a unos gatitos por una tuverias. \n eligue cual camino haras 1, 2 o 3. \n");
    scanf("%i", &caminoX);

    switch(caminoX)
    {
    case 1:
        printf("el camino por el bosque te llevo hacia la casa del lobo feroz y te comio, perdiste. \n");
    break;

    case 2:
        printf("El camino hacia el sotano te llevo hacia la guarida del chupacabras y te comio, perdiste. \n");
    break;

    case 3:
        printf("El seguir a los gatitos te llevo hacia el paraiso, felicidades, ganaste. \n");
    break;

    default:
        printf("No elegiste ninguno de los caminos y te fuiste al infierno. \n");
    break;
    }
    return 0;
}
