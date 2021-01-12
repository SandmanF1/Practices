#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int cantidad_de_argumentos, const char *Argumento[]){

    int pid = fork();

    if(pid){
        printf("Ejecutando proceso padre de PID: %d, tu PID es: %d\n", getpid(), pid);
    }else
        wait(NULL);
        printf("Se esta ejecutando el proceso padre otra vez\n");
    {
        printf("Ejecutando proceso Hijo de PID: %d\n", getpid());
        sleep(2);
    }
    system("pause");

    return 0;
}