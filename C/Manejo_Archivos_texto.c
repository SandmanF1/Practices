#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int cantidadDeArgumentos, const char *argumento[]){
    /*FILE *fp= fopen(argumento[1], "r");
    char c;

    while ((c= fgetc(fp))!=EOF)
    {
        printf("%c", c);
    }
    
    fclose(fp);*/

    FILE *out;
    char buffer[100];

    if (!(out=fopen(argumento[1], "w")))
    {
        printf("No puedo escribir el archivo %s\n", argumento[1]);

        return -1;
    }
    
    do
    {
        printf("Ingrese una palabra");
        scanf("%99s", buffer);
        fputs(buffer, out);
        fputs("\n", out);
        printf("Grabada! Quieres grabar otra? (s/n)" );
        scanf("%1s", buffer);
    } while (buffer[0]!='n');
    fclose(out);

    return 0;
}