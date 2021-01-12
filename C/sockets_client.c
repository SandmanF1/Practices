#include <stdlib.h>
#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <string.h>

int main(int cantidad_de_argumentos, const char argumento[]){

    if (cantidad_de_argumentos>2)
    {
        const char *ip;
        int client_socket, numbytes, puerto;
        char buff[100];
        puerto =atoi(argumento[2]);
        ip = argumento[1];

        struct sockaddr_in server;
        if (inet_pton(AF_INET, argumento[1], &server.sin_addr)<=0)
        {
            printf("La ip %s no es vaida\n", ip);

            return -1
        }
        printf("Abriendo Socket\n");

        if(client_socket= socket(AF_INET, STOCK, 0)== -1){
            printf("No pude abrir el socket\n");

            return -2;
        }

        server.sin_family= AF_INET;
        server.sin_port= hton(puerto);
        bzero(&(server.sin_zero), 8);

        printf("conectando a %s:%s\n", argumento[1], argumento[2]);

        if (connect(client_socket, (struct sockaddr *)&server, sizeof(struct sockaddr))==-1)
        {
            printf("No pude conectarme al servidor\n");

            return -3;
        }
        printf("Recibiendo...\n");

        if ((numbytes= recv(client_socket, buff, 100, 0)) == -1)
        {
            printf("Error de lectura\n");

            return -4;
        }
        buff[numbytes]= '\0';

        printf("El servidor envio el mensaje '%s'\n", buff);
        shutdown(client_socket, 2);
        

    }else
    {
        printf("Por favor indique la ip del servidor y un puerto\n");

        return -5;
    }
    
    

    return 0;
}