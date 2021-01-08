#include <stdio.h>
#include <stdlib.h>

//Defino mi lista enlazada como una estructura autoreferenciada
typedef struct Node
{
    int number;
    struct Node *next;
    
    
}NODE;

//Creamos una funcion que nos permita crear nuevos nodos a mi lista enlazada
NODE * createNode(int number){
    NODE * newNode; //Creamos un puntero hacia el nodo que se acaba de crear

    newNode = malloc(sizeof(NODE)); //Reservamos un espacio de memoria del tamaño de un nodo
    newNode->next=NULL; //Asignamos el puntero al nuevo nodo como null para evitar que la lista se vaya a una direccion de memoria aleatoria
    newNode->number= number; //Asignamos el numero argumento de la funcion al espacio del nodo recien creado

    return newNode; //La funcion devuelve un puntero al nuevo nodo creado
}

//Los argumentos de la funcion principal no se ocupan en este programa por nlo que se pueden omitir, yo los puse por costumbre
int main (int cantidadDeArgumentos, const char * argumento[]){

    NODE *start = NULL, *current, *next;    //Creamos un puntero a la primera posición de la lista la cual por defecto está vacia
    char go;                                //creamos un variable que nos indique si debemos seguir creando nodos, un contador
    int listSize=0, number;                 //Iniciamos el tamaño de la lista en 0 nodos y una variable para guardar el numero ingresado por el usuario

    //Ciclo que me crea y rellena nodos
    do
    {
        //Mensaje para el usuario que me dice la cantidad de nodos existentes y me pide el contenido para el siguiente
        printf("La lista contiene %d nodos. Ingrese el siguiente numero (0 pata finalizar): ", listSize); 

        //capturamos el numero ingresado por el usuario para insertarlo en el nodo
        scanf("%d", &number); 

        //Primer condicional, detecta si el usuario ingreso un numero diferente de 0, caso contrario termina el ciclo do-while
        if (number)
        {
            //Segundo condicional, detecta si es que ya existe un nodo anterior en la lista, caso contrario crea el primer nodo
            if (!start) {
                //Crea el nodo de inicio y lo rellena con el numero ingresado
                start =createNode(number);

                //Aumenta el tamaño de la lista en 1, para indicar que ya tiene un nodo
                listSize++;
            }else
            {
                //En caso de ya existir un primer nodo, iguala nuestra extructura auxiliar al primer nodo para empezar a recorrer la lista
                current= start;

                //Creamos un ciclo donde current se va igualando al siguiente nodo hasta que ya no quedan mas, es decir, se ubica en el ultimo nodo de la lista
                while (current->next)
                {
                    current= current->next;
                }

                //Creamos un nodo siguiente al ultimo y lo rellenamos con el valor ingresado por el usuario
                current->next= createNode(number);

                //Aumentamos el tamaño de la lista en uno, indicando que tenemos un nodo más
                listSize++;
            }
            
            //Indicamos que se siga ejecutando el ciclo
            go=1;
        }else
        {
            //En este caso el usuario ingreso 0 por lo que indicamos que se deje de ejecutar el ciclo
            go=0;
        }
        
    } while (go);
    
    //En esta seccion vamos a recorrer la lista por lo que volvemos a igualar nuestro puntero auxiliar de recorrido al nodo inicial
    current= start;

    //Comenzamos a mostrar los datos ingresados
    printf("La lista contiene los numeros: \n");
    while (current)
    {
        //Imprimimos el valor principal almacenado en el nodo
        printf("%d", current->number);

        //Preguntamos si es que existe un puntero a otro nodo en el nodo actual, si no hay quiere decir que aqui termina la lista, y si es así, imprimimos 
        printf(current->next?", ": "\n");

        //Igualamos nuestro puntero de recorrido a la direccion del siguiente nodo
        current= current->next;
    }

    //Una vez terminado el uso de la lista liberamos la memoria nodo a nodo y siempre guardando la ubicacion del siguiente nodo en el puntero auxiliar next
    while (current)
    {
        //igualamos nuestro puntero al siguiente en la lista ya que una vez liberado el nodo se perderia la ubicacion del siguiente 
        next= current->next;

        //Liberamos el nodo
        free(current);

        //igualamos la variable de recorrido a nuestro puntero que respalda la ubicacion del siguiente nodo
        current= next;
    }

    //Fin del programa
    return 0;
}