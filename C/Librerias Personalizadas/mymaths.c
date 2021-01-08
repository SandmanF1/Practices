#include "mymaths.h"
#include <math.h>

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