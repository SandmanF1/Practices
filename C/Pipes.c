#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

#define MSGSIZE 16

int main(int cantidad_de_argumentos, const char *argumento[]){
    FILE *in;
    int pid, p[2];

    if (pipe(p)<0)
    {
        printf("No se pudieron crear los pipes\n");

        return -2;
    }
    if (!(in=fopen(argumento[1], "r")))
    {
        printf("No pude leer el archivo %s\n", argumento[1]);
        return -1;
    }
    if (pid=fork())
    {
        char buffer[MSGSIZE];
        printf("Soy el proceso padre. voy a leer %s\n", argumento[1]);
        while (fgets(buffer, MSGSIZE, in))
        {
            printf("lei %s. Dime %d: Cual es el caracter mas grande?\n", buffer, pid);
            write(p[1], buffer, MSGSIZE);
        }
        close(p[1]);
        printf("Esperando procesos hijo\n");
        wait(NULL);
        fclose(in);
    }else
    {
        close(p[1]);
        printf("Soy el hijo. Espero que aparezca algo en el pipe\n");
        char buffer[MSGSIZE], max;
        while (read(p[0], buffer, MSGSIZE)>0)
        {
            printf("lei '%s' desde el pipe\n", buffer);
            max=buffer[0];
            for (int i = 0; i < MSGSIZE; i++)
            {
                max=buffer[1];
            }
            
        }
        printf("Max: '%c'\n", max);
    }

    return 0;
}