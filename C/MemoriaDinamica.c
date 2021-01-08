//Incluyo las librerias necesarias para el programa
#include <stdio.h> //Libreria de entrada y salida
#include <stdlib.h> //Libreria de funciones estandar, contiene las funciones de reserva de memoria
#include <string.h> //Libreria para el manejo de cadenas de caracteres, contiene las funciones necesarias para guardar los datos del buffer

//Defino mis tipos de datos personalizados
typedef char name[100]; //Dato personalizado de tipo vector de 100 posiciones, 1 sola dimension
typedef char email[100]; //Dato personalizado de tipo vector de 100 posiciones, 1 sola dimension
typedef struct //dato personalizado de tipo estructura,  2 parametros con tipos de datos personalizados
{
    name nombre;
    email correo;
} contacto; //Nombre del tipo de dato personaliado tipo estructura

//Programa que crea una lista de contactos sin un maximo establecido
int main(int cantidad_de_argumentos, const char * argumento[]){ 
    
    //Creo un puntero vacio para la direccion de memoria donde voy a empezar a guardar la lista de contactos, esto la convierte en un vector
    contacto *list= NULL;

    //creo un buffer donde se guarda lo que ingrese el usuario antes de almacenarlo 
    char buffer[100];

    //creo variables de control que me digan el tamaño de la lista y si se debe seguir añadiendo contactos
    int go, listSize=0;

    //ciclo repetitivo donde se pide que se ingrese la informacion de cada contacto
    do
    {
        printf("Ingrese el nombre del nuevo contacto (0 para terminar): ");

        //Captura del input con un límite de 99 caracteres, el caracter 100 es el \0 que es invisible y me indica el final de la lista
        scanf("%99s", buffer);

        //Compruebo si el usuario no escribio el 0 para salir
        if (strcmp("0", buffer)!=0)
        {
            //Compruebo si la lista está vacia, en caso de estarlo reservo la cantidad de memoria correspondiente a 1 contacto
            if (!list)
            {
                list= malloc(sizeof(contacto)); //Esto le asigna a list el valor de la direccion de memoria donde empieza la reserva
            }else //Si la lista no esta vacia reservo el equivalente a 1 contacto mas lo que ya está reservado
            {
                list= realloc(list, sizeof(contacto)*(listSize+1) );
            }

            //Copio lo del buffer en el nombre del contacto correspondiente
            strcpy(list[listSize].nombre, buffer);

            //Pido el email del contacto
            printf("Ingrese el email de %s: ", buffer);

            //Capturo lo ingresado por teclado en el buffer
            scanf("%99s", buffer);

            //Copio el buffer en el campo correspondiente de la estructura, en este caso correo
            strcpy(list[listSize].correo, buffer );

            //Aumento el tamaño de la lista para seguir reservando memoria para mas contactos
            listSize++;

            //Indico que quiero seguir añadiendo contactos
            go=1;
        }else
        {
            //En caso de que el usuario ingrese 0, detengo el ciclo y muestro la lista de contactos creada
            go=0;
        }
    } while (go);

    //Presentacion de la lista de contactos creada
    printf("\n Lista de Contactos: \n");
    printf("Nombre: \t\tEmail:\n");
    for (int i = 0; i < listSize; i++)
    {
        printf("%s\t\t%s\n", list[i].nombre, list[i].correo);
    }
    
    //Libero la memoria utilizada una ve finalizado el programa
    free(list);

    //Envio el codigo 0 para terminar el programa, en caso de error puedo enviar un codigo diferente
    return 0;
}
//Para depuracion de memoryLeaks usar Valgrind