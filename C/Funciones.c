#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//Declaracion de funciones, solo prima
int factorial (int n);
int prime (int n);
double derivada (char fx, double x);
double f (double x);
double g (double x);

//Definicion de tipos de datos personalizados


//Definicion de estructuras
typedef struct
{
    char nombre[30];
    int edad;
    float altura;
    int celular;
}contacto;

//Programa que acumula los ejercicios de la tarea 2 de Programacion en C++ pero en C
int main(){

    //Declaracion de variables dentro de Main
    int choose=0;

    //Mensaje de Bienvenida
    printf("Bienvenido a mi programa, selecciona que ejercicio deseas ejecutar (0 para salir): ");
    scanf("%u", &choose);

    switch (choose)
    {
    case 1:{
        system("cls");
        printf("Usted a escogido el ejercicio %d \nOrganizador de Numeros", choose);

        //Inserte Codigo Aqui

        break;
    }
        
    case 2:{
        system("cls");
        printf("Usted a escogido el ejercicio %d \nCalculo de las 3 Sumas", choose);

        //Inserte Codigo Aqui

        break;
    }
        
    case 3:{
        system("cls");
        printf("Usted a escogido el ejercicio %d \nAproximacion del valor de Pi", choose);

        //Inserte Codigo Aqui

        break;
    }
        
    case 4:{
        double e=0;
        double xi=0,xi_1=0;

        system("cls");
        printf("Usted a escogido el ejercicio %d \nAproximacion mediante el Metodo de Newton Raphson", choose);
        printf("\n\nIngrese el grado de aproximacion deseado (10^(-5) max): ");
        scanf("%lf", &e);

        //Aproximacion de la funcion f(x)
        do
        {
            xi_1=xi;

            xi=xi_1-(f(xi_1)/derivada('f',xi_1));
        } while (fabs(xi-xi_1)>=e);
        printf("\nEl valor de la raiz de la funcion f es: %lf", xi);
        
        //Aproximacion de la funcion g(x)
        xi=(-2);
        do
        {
            xi_1=xi;

            xi=xi_1-(g(xi_1)/derivada('g',xi_1));
        } while (fabs(xi-xi_1)>=e);
        printf("\nEl valor de la raiz de la funcion g es: %lf", xi);

        break;
    }
        
    case 5:{
        int n=0, sum=0;
        system("cls");
        printf("Usted a escogido el ejercicio %d \nNumeros Primos en los Intervalos", choose);
        printf("\nEl programa calcula:\n\t1. El conjunto de numeros primos en el intervalo [2;n^2].\n\t2. La suma de los numeros no primos en el intervalo [n;(2n^3)-5]\n\nIngrese un valor n>1: ");
        scanf("%u", &n);

        printf("Los numeros primos en el intervalo [2; %u] son: ", n );
        for (int i = 2; i <= (n*n); i++)
        {
            if(prime (i)){
                printf("\n\t%u Es Primo!", i);
            }
        }

        printf("\n\nLos numeros no primos en el intervalor [%u ; %u] son:", n, (2*n*n*n)-5);
        for (int i = n; i <= (2*n*n*n)-5; i++)
        {
            if (!prime(i))
            {
                printf("\n\t%u No Es Primo!", i);
                sum+=i;
            }
            
        }
        printf("Y su suma es igual a: %u", sum);
        

        break;
    }
    
    case 6:{
        int option=1;
        int option1, option2;
        int NroDeContacto=0;

        system("cls");
        printf("Usted a escogido el ejercicio %d \nDirectorio Telefonico. ", choose);
        while(option!=0){
            printf("\n\nQue desea hacer?:\n\t1. Add nuevo contacto.\n\t2. Checkear un contacto.\n\t3. Borrar un contacto.\n\n\t0. Salir\n\nEleccion: ");
            scanf("%i", &option);
            switch (option)
            {
            case 1:
                option1=1;
                option2=0;
                contacto *lista=NULL;

                do
                {
                    if (!lista)
                    {
                        lista=malloc(sizeof(contacto));
                    }else
                    {
                        lista=realloc(lista, sizeof(contacto)*(NroDeContacto+1));
                    }
                    
                    printf("Add nuevo contacto!\n\tNombre: ");
                    scanf("%20s", lista[NroDeContacto].nombre);
                    printf("\tEdad: ");
                    scanf("%i", &lista[NroDeContacto].edad);
                    printf("\tAltura: ");
                    scanf("%f", &lista[NroDeContacto].altura);
                    printf("\tNro. Celular: ");
                    scanf("%10d", &lista[NroDeContacto].celular);
                    printf("Desea add otro?(1/0)");
                    scanf("%i", &option1);
                    NroDeContacto++;

                } while (option1);
                
                

                break;

            case 2:
                option1=1;
                while(option1!=0){
                    for (int i = 0; i < NroDeContacto; i++)
                    {
                        printf("\n\t%i. %s",i+1 , lista[i].nombre);
                    }
                    
                    printf("\n\n\t0. Salir.\n\nEscoja el contacto: ");
                    scanf("%i", &option2);
                    if (!option2)
                    {
                        option1=0;
                    }else if (option2<0 || option2>(NroDeContacto))
                    {
                        printf("\n\tEl Contacto especificado no existe!\n");
                    }else
                    {
                        printf("\n\tNombre: %s\n\tEdad: %i\n\tAltura: %3.2f\n\tNumero Celular: 0%d\n\n", lista[option2-1].nombre, lista[option2-1].edad, lista[option2-1].altura, lista[option2-1].celular);
                    system("pause");
                    }
                }
                break;
            case 3:
                option1=1;
                printf("Estas Seguro, la informacion no se podra recuperar(1/0): ");
                scanf("%i",&option1);
                if (option1)
                {
                    for (int i = 0; i < NroDeContacto; i++)
                    {
                        printf("\nContacto %i... borrado", i+1);
                    }
                    free(lista);
                    NroDeContacto=0;
                    printf("\n\nTodos los contactos Borrados!");
                    system("pause");
                }
                
                break;

            default:
                if (option)
                {
                    system("cls");
                    printf("Opcion Invalida!\n");
                    system("pause");
                    break;
                }
                printf("Saliendo");
                
                break;
            }
        }
    }
    default:
        break;
    }

    printf("\nGracias por usar mi programa; att: SandmanF1");
    
    return 0;
}

//Declaracion de funciones, completas++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ Inicio

//Funcion que calcula el factorial de un numero
int factorial (int n){
    int f=1;

    for (int i = 2; i <= n; i++)
    {
        f*=i;
    }

    return f;    
}

//Funcion que determina si un numero es primo o no
int prime (int n){
    int prime=1;
        
    for (int i = 2 ; i < n && prime==1; i++)    {
        if (n%i==0)
        {
            prime=0;
        }
    }

    return prime;
}

//Funcion f(x) a usar
double f(double x){
    double fx= exp(x)+(2*pow(x,3))-(3*x);

    return fx;
}

//Funcion g(x) a usar
double g(double x){
    double gx= (2*x*x)+(x*cos(x));

    return gx;
}

//Funcion que calcula la aproximacion de la derivada en un punto
double derivada (char fx ,double x){
    double a= x-0.0000000001, dx;

    if (fx=='f')
    {
        dx= (f(x)-f(a))/(x-a);
    }else if (fx=='g')
    {
        dx= (g(x)-g(a))/(x-a);
    }
    
    return dx;
}

//Declaracion de funciones, completas++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ Fin