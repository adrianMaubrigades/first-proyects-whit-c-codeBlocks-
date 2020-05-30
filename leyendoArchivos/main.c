#include <stdio.h>
#include <stdlib.h>

struct personalData
{
    char name[20];
    char lastName[20];
    int age;
};

int main()
{
    printf("Archivos - guardar en un archivo.\n");

    struct personalData person;

    FILE *archivo;
    archivo = fopen("DatosPersonales001.dat", "rb");

    if(archivo != NULL)
    {
        fread(&person, sizeof(person), 1, archivo);
        printf("Imprimir los datos \n");
        printf("Nombre: %s \n", person.name);
        printf("Apellido: %s \n", person.lastName);
        printf("Edad: %i \n", person.age);
        fclose(archivo);
    }
    else
    {
        printf("No se ha podido crear el archivo.\n");
    }
    return 0;
}
