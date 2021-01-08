/*------------------------------------------------------------ Explicaciones ------------------------------------------------------------------------------------------------------------------------
En este reto lo que voy a hacer es modificar un programa de listas enlazadas para que me permita eliminar nodos
El programa original se encuentra en https://raw.githubusercontent.com/mchojrin/platzi_curso_c_clases/2b66b7e0178c0ae13c9434e3bf9eb08a8aad0434/linked_list.c
Tenemos 3 casos a analizar: 
    1. El nodo que queremos eliminar no existe.
    2. El nodo que queremos eliminar no es el primero
    3. El nodo que queremos eliminar es el primero
Abordamos cada caso de la siguiente manera;
    1. Solo recorremos la lista sin hacer ningun cambio, ningun problema por aqui
    2. En este caso tendremos que saber siempre cuál era el nodo anterior para, una vez eliminado el buscado, apuntar el siguiente del anterior al siguiente del eliminado.
    3. En este caso no existe un nodo anterior y una vez eliminado debemos modificar el comienzo de la lista
En mi caso voy a crear una sentencia switch para seleccionar si deseo crear un nuevo nodo, revisar la lista o eliminar un nodo y a partir de el trabajare
El codigo estara orientado a usarse en un equipo Windows por lo que si ejecuta en otro sistema operativo probablemente no se visualice adecuadamente debido a funciones system("") no compatibles.
----------------------------------------------------------- Fin de Explicaciones -------------------------------------------------------------------------------------------------------------------*/

//Incluimos las librerias necesarias
#include <stdio.h>
#include <stdlib.h>

//Definicion de tipos de Variables Personalizados ----------------------------------------------------------------------------------------------------------------------------------------------------

//Definimos el tipo de variable nodo
typedef struct Node {
	int number;         //Aqui guardamos el elemento de la lista
	struct Node * next; //Aqui guardamos la direccion del siguiente nodo de la lista
} NODE;                 //Aqui definimos el nombre de nuestro tipo de variable nodo

//Definimos nuestra funcion creadora de nodos, personalmente prefiero declarar al comienzo solo el prototipo y al final del programa las funciones
NODE * createNode( int number );
void NodeDelete (int criterioDeBorrado, int elementoBuscado, int listSize, NODE *start );
//Fin de definicion de tipos de variables personalizados ---------------------------------------------------------------------------------------------------------------------------------------------

//Inicio del Codigo Principal ------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Funcion principal, los argumentos no se van a usar asi que se pueden omitir, yo los dejo por no perder la costumbre
int main( /*int argc, const char * arg[]*/ )
{
    //Definimos las variables a utilizar
	NODE * start = NULL, * current, *next; //Estas son variables tipo nodo, es decir, estructuras con un contenido y un puntero autorreferenciando la estructura
	char goOn;                             //Esta es una variable tipo caracter, nos va a servir como criterio de parada auxiliar al recorrer la lista
	int listSize = 0, number, choose, choose1, choose2, position=0;      //Variables enteras, guardan el tamaño de la lista y el numero ingresado por el usuario

    //Meto todo dentro de un while para que el programa no termine a menos que se lo indiquemos, siempre que acabe un trabajo volvera al menu principal
    while (choose)
    {
        system("cls");
        printf("Bienvenido al programa de Listas enlazadas, selecciona que deseas hacer\n\t1. Crear un Nuevo Nodo. \n\t2. Revisar la Lista. \n\t3. Eliminar un Nodo. \n\n\t0. Salir\n\nIngresa tu decision: ");
        scanf("%i", &choose);

        switch (choose)
        {
        case 1:
        {
            system("cls");
            printf("Haz seleccionado la opcion %i: Crear un Nuevo Nodo\n", choose);
            current=start;

            //Ciclo que pide y captura un input del usuario y lo almacena en un nodo creado ese momento
            do {
                printf( "La lista contiene %d nodos. \n\nIngrese el siguiente numero (0 para finalizar): ", listSize );
                scanf("%d", &number );

                //Condicional para saber si el usuario pidio crear un nuevo nodo o terminar el input de datos
                if ( number ) {

                    //condicional que crea el nodo de la manera correspondiente si el nodo es el primero o uno adicional en la lista
                    if ( !start ) {
                        start = createNode( number );
                        listSize++;

                    } else {
                        current = start;

                        while ( current->next ) {
                            current = current->next;
                        }
                        current->next = createNode( number );
                        listSize++;

                    }
                    goOn = 1;

                } else {
                    goOn = 0;

                }
            } while ( goOn );

            break;
        }
        case 2:
        {
            system("cls");
            printf("Haz seleccionado la opcion %i: Revisar la lista\n", choose);
            current = start;
            printf( "La lista contiene los numeros: \n\n" );

            //Ciclo para recorrer la lista e imprimir el contenido
            while (current) {
                position++;
                printf( "[%i]= %d", position, current->number );
                printf( current->next ? "\n" : "\n\n" );
                current = current->next;
            }
            position=0;
            system("pause");

            break;
        }
        case 3:
        {
            system("cls");
            printf("Haz seleccionado la opcion %i: Eliminar un Nodo\n\nSelecciona que criterio de eliminacion deseas utilizar: \n\t1. Eliminar el Nodo en una posicion dada. \n\t2. Eliminar un nodo especifico por su direccion de memoria. (En progreso) \n\t3. Eliminar los nodos con un contenido especifico.  \n\n\t0. Salir.\n\nIngresa tu eleccion: ", choose);
            scanf("%i", &choose1);

            while (choose1)
            {
                switch (choose1)
                {
                case 1:
                {
                    printf("Haz seleccionado la opcion %i: Eliminar el nodo en una posicion dada.\n\nLa lista consta de %i elementos: \n", choose1, listSize);
                    current=start;

                    //Ciclo que me crea una matriz con los elementos de la lista y su posicion
                    for (int i = 1; i <= listSize; i++)
                    {
                        printf( "[%i]= %d\n", i, current->number );
                        current = current->next;
                    }
                    current = start;

                    //Pido al usuario que me indique que elemento desea borrar y lo guardo en una variable entera
                    printf("Que elemento deseas borrar: ");
                    scanf("%i", &choose2);

                    //Algoritmo que borra el nodo y redirecciona los punteros necesarios
                    NodeDelete(1, choose2, listSize, start);
                    choose1=0;
                    
                    break;
                }

                case 2:
                {
                    system("cls");

                    printf("\nLo siento, esta funcion no esta terminada, vuelva a intentarlo en futuras versiones\n");
                    
                    break;
                }
                case 3:
                {
                    printf("Haz seleccionado la opcion %i: Eliminar los nodos con un contenido especifico.\n\nLa lista consta de %i elementos actualmente.\n\nQue deben contener los nodos a eliminar: ", choose1, listSize);
                    scanf("%i", &choose2);
                    
                    NodeDelete(3, choose2, listSize, start);

                    break;
                }

                default:
                    if (choose1)
                    {
                        printf("Valor ingresado incorrecto, vuelva a intentar");
                    }else
                    {
                        printf("Ha seleccionado 0. Salir\nSaliendo...\n\n");
                    }
                    
                    break;
                }
            }

            break;
        }
        default:
            if (choose)
            {
                printf("La opcion seleccionada es incorrecta, vuelve a intentarlo");
            }
            printf("Haz Seleccionado 0: Salir\nSaliendo...\n");

            break;
        }
    }
    current=start;

    //Ciclo para liberar la memoria reservada por cada nodo al finalizar el programa
	while (current) {
		next = current->next;
		free( current );
		current = next;
	}

	return 0;
}
//Fin del codigo Principal --------------------------------------------------------------------------------------------------------------------------------------------------------------------------


//Definicion de funciones ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//Funcion que crea un nuevo nodo y lo rellena
NODE * createNode( int number )
{
    /*
    La funcion crea un nuevo nodo y rellena su variable de contenido con el int number, dejando su puntero al sigueinte nodo como nulo y devolviendo la direccion de memoria al puntero creado la cual debe ser usada para rellenar el puntero al siguiente nodo del anterior nodo
    */

	NODE * newNode;                     //Creamos nuestro nuevo puntero newNode

	newNode = malloc( sizeof(NODE) );   //Reservamos una porcion de memoria del tamaño de un nodo
	newNode->next = NULL;               //Indicamos que por el momento el siguiente nodo no existe, es decir, este es el final de la lista por ahora
	newNode->number = number;           //Rellenamos el espacio de contenido de la lista con el numero dado de argumento de la funcion

	return newNode;                     //Devolvemos la direccion de memoria del nodo creado
}

//Funcion que borra uno o varios nodos
void NodeDelete (int criterioDeBorrado, int elementoBuscado, int listSize, NODE *start )
{
    /*
    Los Criterios de busqueda son:
        '1' Contenido: se buscara y eliminara todos los nodos que contengan el elementoBuscado correspondiete.
        '2' Direccion: Se eliminara el nodo en la direccion de memoria especificada. (incompleto, trabajando en ello)
        '3' Posicion: Se buscara la posicion especificada y se borrara el nodo que ahi se encuentre.
    En todos los casos se toma como argumento el int elementoBuscado
    En listSize se debe ingresar el tamaño de la lista a recorrer
    en *start se debe ingresar el puntero al primer nodo de la lista
    */
    
    //Definimos las variables a utilizar
	NODE *current, *next, *past;             //Estas son variables tipo nodo, es decir, estructuras con un contenido y un puntero autorreferenciando la estructura
	int go;                                  //Esta es una variable tipo caracter, nos va a servir como criterio de parada auxiliar al recorrer la lista
	int position=0, a;                       //Variables enteras, guardan el tamaño de la lista y el numero ingresado por el usuario
    current=start;
    if (criterioDeBorrado==3)
    {
        a=current->number;
        go=listSize+1;
    }else if (criterioDeBorrado==1)
    {
        a=position;
        go=listSize-position+1;
    }
    
    printf("\nEntrando a la funcion NodeDelete:\n\tstart= %p.\n\tcurrent= %p.", start, current);
    
    for (position = 1; position <= listSize && go; position++)
    {
        a=position;
        printf("\nEntrando al ciclo for iteracion %i\n", position);
        next = current->next;   //Almaceno la direccion de memoria del siguiente nodo por si borro el actual

        printf("a= %i & elementroBuscado= %i", a, elementoBuscado);
        if(a == elementoBuscado){
            printf("\nHe reconocido que a= %i es igual a elementoBuscado= %i\n",a, elementoBuscado);
            
            //Si el nodo a eliminar esta en el primer puesto de la lista
            if(current==start){
                printf("\nEl valor a borrar es el primero de la lista, borrando...");
                past=start;             //Guardo la direccion de memoria del nodo
                start= start->next;     //Indico que ahora la lista inicia en el siguiente nodo
                free(past);             //Libero la memoria del nodo que solia ser el primero
            }
            
            //Si el nodo a eliminar esta en el ultimo puesto de la lista
            if (position==listSize)
            {
                printf("\nEl valor a borrar es el ultimo nodo de la lista, borrando...");
                free( current );    //Liberamos la memoria reservada por lo que se considera borrado
                current=NULL;       //Borramos la direccion de memoria de current
                past->next=NULL;    //Nombro al nodo anterior como el ultimo nodo de la lista

            //Si el nodo a eliminar no esta ni al unicio ni al final de la lista
            }else
            {
                printf("\nEl valor a borrar no es ni el primero ni el ultimo de la lista, Borrando...");
                free( current );    //Libero la memoria reservada en la posicion actual
                current=NULL;       //Borro la referencia a la direccion de memoria actual 
                past->next=next;    //Le indico al nodo anterior que ahora su siguiente nodo es el siguiente al actual
            }
            
        }else{
            past = current;     //Guardo la direccion de memoria del nodo actual para poder reenlazarlo en caso de que el siguiente si sea el que busco
            current = next;     //Avanzo mi puntero auxiliar de recorrido de lista al siguiente nodo
        }
        go--;
    }
}