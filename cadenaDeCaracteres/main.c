#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Cadena de caracteres. \n");
    char nameC[50];
    int size;
    printf("Ingresa el nombre con gets: \n");
    gets(nameC);
    printf("El nombre ingresado es: ");
    puts(nameC);
    size = strlen(nameC);
    printf("\nEl tamaño de la cadena es: %i \n", size);

    //Reto mostrar el texto invertido
    printf("El texto invertido seria entonces : \n");
    for(int i=size; i>=0; i--)
    {
        printf("%c",nameC[i]);
    }
    return 0;
}
