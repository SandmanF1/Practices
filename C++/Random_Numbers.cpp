/*
Programa sobre creacion y uso de numeros aleatorios en programas C++ en Física y funciones generales, a revisar:
    1.- Creacion de numros aleatorios con semilla determinada por el compilador.
    2.- Creacion de numeros aleatorios determinando una fuente de semilla.
    3.- Creacion de Numeros aleatorios acotados.
    4.- Uso Practico de Numeros Aleatorios: Integrales.
    5.- Uso Practico de Numeros Aleatorios: Aproximaciones.

Se usa tambien la funcion system que permite mandar comandos a la consola, en este caso la usamos con los comandos 
    1.- "cls" para limpiar pantalla
    2.-"pause" para pausar la ejecucion del codigo hasta que se oprima una tecla
*/

//Inclusion de librerias, para mas informacion consulte la documentacion del estandar vigente de C++
#include <iostream> //Libreria estandar de entrada y salida 
#include <cstdlib>  //Libreria de funciones estandar de C++, se puede usar la funcion stdlib.h en su lugar si se desea
#include <ctime>    //Libreria de manejo de fechas, de manera standar trabaja con el numeros de segundos transcurridos desde el 1 de enero de 1970

//Definicion de espacio de nombres, sirve para evitar que tener que definirlo en cada linea que se vaya a usar un espacio de nombres diferente al predeterminado
using namespace std; //Espacio de nombres estandar, para el uso de cin y cout sin tener que anteponer std::

//Funcion Principal, aquí se ejecuta el hilo primario, puede llevar argumentos, en este caso los omitimos
int main(){

    //Definicion de variables, en el caso de ciclos while y do-while es necesario inicializarlos fuera del ciclo
    int choose=0;   //Eleccion del usuario en el menu principal
    int amount=0;   //Cantidad de numeros aleatorios a generar, Opcion 1
    int max=0;      //Cota superior para los numeros aleatorios generados, ejercicio 3
    int min=0;      //Cota inferior para los numeros aleatorios generados, ejercicio 3

    //Ciclo principal, sirve para evitar que el programa termine hasta que el usuario lo especifique
    do{
        //Añado una llamado a limpiar pantalla para que se borre lo anterior cada vez que se acaba una ejecucion
        system("cls");
        cout<<"Bienvenido a mi programa sobre numeros aleatorios, tenemos las siguientes opciones:\n\n\t1. Creacion de numeros aleatorios con semilla determinada por el compilador\n\t2. Creacion de numeros aleatorios determinando una fuente para la semilla\n\t3. Creacion de numeros aleatorios acotados\n\t4. Uso Practico de Numeros Aleatorios: Integrales\n\t5. Uso practico de numeros aleatorios: Aproximaciones\n\n\t0. Salir\n\nEscoja una opcion: ";
        cin>>choose;

        //Bifurcacion  principal, para permitir al usuario elegir que ejercicio ejecutar
        switch (choose)
        {
        case 1:
        {
            cout<<"\n\tCreacion de numeros aleatorios con semilla determinada por el compilador\n"<<endl;
            cout<<"Ingresa la cantidad de numeros aleatorios que quieres generar: ";
            cin>>amount;
            cout<<"\n";

            //Ciclo que imprime la cantidad especificada de numeros aleatorios
            for (int i = 0; i < amount; i++)
            {
                cout<<"\t"<<i+1<<". "<<rand()<<endl; //Imprime un numero aleatorio en pantalla
            }
            cout<<"\n";
            system("pause"); //Detiene la ejecucion del programa hasta que se oprima una tecla
            
            break;
        }
        case 2:
        {
            cout<<"\n\tCreacion de numeros aleatorios determinando una fuente para la semilla\n"<<endl;
            cout<<"Se tomara como semilla el numero de segundos transcurridos desde el 1 de enero de 1970!\n"<<endl;
            cout<<"Ingresa la cantidad de numeros aleatorios que deseas generar: ";
            cin>>amount;
            cout<<"\n";

            //Determinacion de la semilla a usar
            srand(time(NULL));  //Fijamos como semilla el tiempo sin ningun tipo de formato especifico, es desir, en segundos

            //Ciclo que imprime la cantidad especificada de numeros aleatorios
            for (int i = 0; i < amount; i++)
            {
                cout<<"\t"<<i+1<<". "<<rand()<<endl; //Imprime un numero aleatorio en pantalla
            }
            cout<<"\n";
            system("pause"); //Detiene la ejecucion del programa hasta que se oprima una tecla

            break;
        }
        case 3:
        {
            cout<<"\n\tCreacion de numeros aleatorios acotados\n"<<endl;

            //Para acotar los numeros aleatorios generados usamos la formula: (rand()%(max-min+1))+min;
            //En caso de querer decilmales basta con hacer un parce a double y divir la formula anterior para 1 seguido de tantos 0 como decimales queremos (double datatype size max)
            cout<<"Ingrese el intervalo en el que desea que esten los numeros aleatorios generados\nMinimo: ";
            cin>>min;
            cout<<"Maximo: ";
            cin>>max;

            cout<<"\nIngresa la cantidad de numeros aleatorios que deseas generar: ";
            cin>>amount;
            cout<<"\n";

            //Determinacion de la semilla a usar
            srand(time(NULL));  //Fijamos como semilla el tiempo sin ningun tipo de formato especifico, es desir, en segundos

            //Ciclo que imprime la cantidad especificada de numeros aleatorios
            for (int i = 0; i < amount; i++)
            {
                cout<<"\t"<<i+1<<". "<<(rand()%(max-min+1))+min<<endl; //Imprime un numero aleatorio en pantalla
            }
            cout<<"\n";
            system("pause"); //Detiene la ejecucion del programa hasta que se oprima una tecla
            break;
        }
        case 4:
        {
            cout<<"\nHaz escogido la opcion 4. \n\tUso Practico de Numeros Aleatorios: Integrales\n"<<endl;

            
            break;
        }
        case 5:
        {
            cout<<"\nHaz escogido la opcion 5. \n\tUso practico de numeros aleatorios: Aproximaciones\n"<<endl;
            break;
        }
        default:
            if (choose) //Si el valor ingresado es diferente de 0 devuelve el mensaje, esto pasara cada vez que se ingrese un valor que no esta en la lista ya que es el default del switch
            {
                cout<<"\nLa opcion ingresada es incorrecta, por favor intentelo de nuevo"<<endl;
                system("pause");
            }else
            {
                cout<<"\nHas escogido 0. Salir\n\nSaliendo..."<<endl;
            }
            
            break;
        }
    } while (choose);   //Como cualquier valor diferente de 0 se interpreta como true, basta con poner choose de condicion
    
    return 0; //Retorno de la funcion, 0 para OK y diferente de 0 para identificar errores
}