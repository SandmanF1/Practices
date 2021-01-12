#include <stdio.h>
#include <stdlib.h>

struct person
{
    char name[100];
    unsigned int age;
};


int main(int cantidadDeArgumentos, const char *argumento[]){
    /*FILE *out;
    char buffer[100];

    if (cantidadDeArgumentos<2)
    {
        printf("Indique el nombre del archivo de salida\n");
        return -1;
    }
    if (!(out=fopen(argumento[1],"w")))
    {
        printf("No puedo escribir en el archivo de salida %s\n", argumento[1]);
        return -2;
    }
    struct person p;
    do
    {
        printf("Ingrese el nombre de la persona: ");
        scanf("%99s", &p.name);
        printf("Ingrese la edad de la persona: ");
        scanf("%d", &(p.age));
        fwrite(&p, sizeof(struct person), 1, out);
        printf("Grabada! Desea añadir otra?");
        scanf("%1s", buffer);
    } while (buffer[0]!='n');
    fclose(out);*/

    FILE *in;
    char buffer[100];

    if (cantidadDeArgumentos<2)
    {
        printf("Indique el nombre del archivo de entrada\n");
        return -1;
    }
    if (!(in=fopen(argumento[1],"r")))
    {
        printf("No puedo leer el archivo de salida %s\n", argumento[1]);
        return -2;
    }
    struct person p;

    while (fread(&p, sizeof(struct person), 1, in))
    {
        printf("%s tiene %d anios\n", p.name, p.age);
    }
    fclose(in);
    
    return 0;
}