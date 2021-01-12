//Programa que calcula el area de distintas figuras geometricas

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    int choose;
    
    do {
        cout<<"Programa que calcula el area de distintas figuras geometricas"<<endl;
        cout<<"\t1. Paralelogramo\n\t2. Triangulo\n\t3. Circulo\n\t4. Esfera\n\t0. Salir"<<endl;

        cout<<"Escoja una opcion: ";
        cin>>choose;

        switch (choose)
        {
        case 1:

            {
            system("cls");
            double base=0, altura=0;
            cout<<"Calculo del area del paralelogramo\n"<<endl;
            cout<<"\nIngrese la Base: ";
            cin>>base;
            cout<<"Ingrese la Altura: ";
            cin>>altura;
            cout<<"El area del paralelogramo es: "<<base*altura<<endl;
            break;
            }
        
        case 2:
            {
            system("cls");
            double base=0, altura=0;
            cout<<"Calculo del area del Triangulo\n"<<endl;
            cout<<"\nIngrese la Base: ";
            cin>>base;
            cout<<"Ingrese la Altura: ";
            cin>>altura;
            cout<<"El area del triangulo es: "<<(base*altura)/2.0<<endl;
            break;
            }

        case 3:
            {
            system("cls");
            double radio=0;
            double pi= 3.14159265358979;
            cout<<"Calculo del area del circulo\n"<<endl;
            cout<<"\nIngrese el radio del circulo: ";
            cin>>radio;
            cout<<"El area del circulo es: "<<(pi*radio*radio)<<endl;
            break;
            }

        case 4:
            {
            system("cls");
            double radio=0;
            double pi= 3.14159265358979;
            cout<<"Calculo del area de la esfera\n"<<endl;
            cout<<"\nIngrese el radio de la esfera: ";
            cin>>radio;
            cout<<"El area de la esfera es: "<<(4*pi*radio*radio)<<endl;
            break;
            }
        default:
            {
            if (choose)
            {
                cout<<"La opcion escogida no es valida, intente de nuevo"<<endl;
            }else
            {
                cout<<"Saliendo... ";
            }
            break;
            }
        }
    }while(choose);
    return 0;
}