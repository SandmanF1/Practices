#include <iostream>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main(){
    cout << "   Bienvenido, para una mejor experiencia abre la consola en pantalla completa, gracias\n                          Pulsa enter para continuar"<<endl;
    _getch();
    system("cls");
    cout << "\n\n  ################################################################################################################"<<endl;
    cout << "  #                                                                                                              #"<<endl;
    cout << "  # _|_|_|                _|                _|  _|                _|      _|                                  _| #  "<<endl;
    cout << "  # _|    _|    _|_|_|  _|_|_|_|    _|_|_|  _|  _|    _|_|_|      _|_|    _|    _|_|_|  _|      _|    _|_|_|  _| #  "<<endl;
    cout << "  # _|_|_|    _|    _|    _|      _|    _|  _|  _|  _|    _|      _|  _|  _|  _|    _|  _|      _|  _|    _|  _| #  "<<endl;
    cout << "  # _|    _|  _|    _|    _|      _|    _|  _|  _|  _|    _|      _|    _|_|  _|    _|    _|  _|    _|    _|  _| #  "<<endl;
    cout << "  # _|_|_|      _|_|_|      _|_|    _|_|_|  _|  _|    _|_|_|      _|      _|    _|_|_|      _|        _|_|_|  _| #  "<<endl;
    cout << "  #                                                                                                              #"<<endl;
    cout << "  ################################################################################################################"<<endl;
    cout << "\n   Bienvenido a Batalla Naval V1.0 By Favian Ramirez\n\n   A continuacion se explican las reglas:"<<endl;
    cout << "\n       1.- Al jugador 1 le corresponden las posiciones del lado izquierdo de la separacion del tablero"<<endl;
    cout << "\n       2.- Al jugador 2 le corresponden las posiciones del lado derecho de la separacion del tablero"<<endl;
    cout << "\n       3.- Para colocar un barco se debe ingresar las coordenadas del tablero en minusculas y juntas, primero la fila y luego la columna"<<endl;
    cout << "\n       4.- Para disparar se hace exactamente cigual que al ingresar los barcos,el fuego amigo esta permitido asi que ten cuidado"<<endl;
    cout << "\n       5.- Cada vez que el programa se detenga, pulsar enter para continuar"<<endl;
    cout << "\n       6.- Cada jugador contara con 4 barcos, el primero en hundir todos los barcos enemigos gana"<<endl;
    cout << "\n   Lee las instrucciones, una vez terminado pulsa enter para continuar"<<endl;
    _getch();

    int a1 = 0,a2 = 0,a3 = 0,a4 = 0,a5 = 0,a6 = 0,a7 = 0,a8 = 0,b1 = 0,b2 = 0,b3 = 0,b4 = 0,b5 = 0,b6 = 0,b7 = 0,b8 = 0,c1 = 0,c2 = 0,c3 = 0,c4 = 0,c5 = 0,c6 = 0,c7 = 0,c8 = 0,d1 = 0,d2 = 0,d3 = 0,d4 = 0,d5 = 0,d6 = 0,d7 = 0,d8 = 0,e1 = 0,e2 = 0,e3 = 0,e4 = 0,e5 = 0,e6 = 0,e7 = 0,e8 = 0,f1 = 0,f2 = 0,f3 = 0,f4 = 0,f5 = 0,f6 = 0,f7 = 0,f8 = 0,g1 = 0,g2 = 0,g3 = 0,g4 = 0,g5 = 0,g6 = 0,g7 = 0,g8 = 0,h1 = 0,h2 = 0,h3 = 0,h4 = 0,h5 = 0,h6 = 0,h7 = 0,h8 = 0;
    int a9 = 0,a10 = 0,a11 = 0,a12 = 0,a13 = 0,a14 = 0,a15 = 0,a16 = 0,b9 = 0,b10 = 0,b11 = 0,b12 = 0,b13 = 0,b14 = 0,b15 = 0,b16 = 0,c9 = 0,c10 = 0,c11 = 0,c12 = 0,c13 = 0,c14 = 0,c15 = 0,c16 = 0,d9 = 0,d10 = 0,d11 = 0,d12 = 0,d13 = 0,d14 = 0,d15 = 0,d16 = 0,e9 = 0,e10 = 0,e11 = 0,e12 = 0,e13 = 0,e14 = 0,e15 = 0,e16 = 0,f9 = 0,f10 = 0,f11 = 0,f12 = 0,f13 = 0,f14 = 0,f15 = 0,f16 = 0,g9 = 0,g10 = 0,g11 = 0,g12 = 0,g13 = 0,g14 = 0,g15 = 0,g16 = 0,h9 = 0,h10 = 0,h11 = 0,h12 = 0,h13 = 0,h14 = 0,h15 = 0,h16 = 0;
    int naves1 = 4;
    int naves2 = 4;
    char shoot[]= "nan";
    char barco11[]= "nan";
    char barco12[]= "nan";
    char barco13[]= "nan";
    char barco14[]= "nan";
    char barco21[]= "nan";
    char barco22[]= "nan";
    char barco23[]= "nan";
    char barco24[]= "nan";

    cout <<"\n                                        1  2  3  4  5  6  7  8    9  10 11 12 13 14 15 16\n";
    cout <<"                                        ________________________________________________"<<endl;
    cout <<"                                    A  |"<<a1<<"  "<<a2<<"  "<<a3<<"  "<<a4<<"  "<<a5<<"  "<<a6<<"  "<<a7<<"  "<<a8<<" || "<<a9<<"  "<<a10<<"  "<<a11<<"  "<<a12<<"  "<<a13<<"  "<<a14<<"  "<<a15<<"  "<<a16<<"|  A"<<endl;
    cout <<"                                       |                                                |"<<endl;
    cout <<"                                    B  |"<<b1<<"  "<<b2<<"  "<<b3<<"  "<<b4<<"  "<<b5<<"  "<<b6<<"  "<<b7<<"  "<<b8<<" || "<<b9<<"  "<<b10<<"  "<<b11<<"  "<<b12<<"  "<<b13<<"  "<<b14<<"  "<<b15<<"  "<<b16<<"|  B"<<endl;
    cout <<"                                       |                                                |"<<endl;
    cout <<"                                    C  |"<<c1<<"  "<<c2<<"  "<<c3<<"  "<<c4<<"  "<<c5<<"  "<<c6<<"  "<<c7<<"  "<<c8<<" || "<<c9<<"  "<<c10<<"  "<<c11<<"  "<<c12<<"  "<<c13<<"  "<<c14<<"  "<<c15<<"  "<<c16<<"|  C"<<endl;
    cout <<"                                       |                                                |"<<endl;
    cout <<"                                    D  |"<<d1<<"  "<<d2<<"  "<<d3<<"  "<<d4<<"  "<<d5<<"  "<<d6<<"  "<<d7<<"  "<<d8<<" || "<<d9<<"  "<<d10<<"  "<<d11<<"  "<<d12<<"  "<<d13<<"  "<<d14<<"  "<<d15<<"  "<<d16<<"|  D"<<endl;
    cout <<"                                       |                                                |"<<endl;
    cout <<"                                    E  |"<<e1<<"  "<<e2<<"  "<<e3<<"  "<<e4<<"  "<<e5<<"  "<<e6<<"  "<<e7<<"  "<<e8<<" || "<<e9<<"  "<<e10<<"  "<<e11<<"  "<<e12<<"  "<<e13<<"  "<<e14<<"  "<<e15<<"  "<<e16<<"|  E"<<endl;
    cout <<"                                       |                                                |"<<endl;
    cout <<"                                    F  |"<<f1<<"  "<<f2<<"  "<<f3<<"  "<<f4<<"  "<<f5<<"  "<<f6<<"  "<<f7<<"  "<<f8<<" || "<<f9<<"  "<<f10<<"  "<<f11<<"  "<<f12<<"  "<<f13<<"  "<<f14<<"  "<<f15<<"  "<<f16<<"|  F"<<endl;
    cout <<"                                       |                                                |"<<endl;
    cout <<"                                    G  |"<<g1<<"  "<<g2<<"  "<<g3<<"  "<<g4<<"  "<<g5<<"  "<<g6<<"  "<<g7<<"  "<<g8<<" || "<<g9<<"  "<<g10<<"  "<<g11<<"  "<<g12<<"  "<<g13<<"  "<<g14<<"  "<<g15<<"  "<<g16<<"|  G"<<endl;
    cout <<"                                       |                                                |"<<endl;
    cout <<"                                    H  |"<<h1<<"  "<<h2<<"  "<<h3<<"  "<<h4<<"  "<<h5<<"  "<<h6<<"  "<<h7<<"  "<<h8<<" || "<<h9<<"  "<<h10<<"  "<<h11<<"  "<<h12<<"  "<<h13<<"  "<<h14<<"  "<<h15<<"  "<<h16<<"|  H"<<endl;
    cout <<"                                        ************************************************"<<endl;
    cout <<"                                        1  2  3  4  5  6  7  8    9  10 11 12 13 14 15 16\n";

    cout << "   Jugador 1, ubica tus barcos: \n\n    - Barco 1: ";
    cin >> barco11;
    cout << "\n    - Barco 2: ";
    cin >> barco12;
    cout << "\n    - Barco 3: ";
    cin >> barco13;
    cout << "\n    - Barco 4: ";
    cin >> barco14;
    cout << "\n   Todos tus barcos han sido ingresados, pulsa enter para que el jugador 2 ingrese sus barcos"<< endl;
    _getch();
    system("cls");
    cout << "\n\n  ################################################################################################################"<<endl;
    cout << "  #                                                                                                              #"<<endl;
    cout << "  # _|_|_|                _|                _|  _|                _|      _|                                  _| #  "<<endl;
    cout << "  # _|    _|    _|_|_|  _|_|_|_|    _|_|_|  _|  _|    _|_|_|      _|_|    _|    _|_|_|  _|      _|    _|_|_|  _| #  "<<endl;
    cout << "  # _|_|_|    _|    _|    _|      _|    _|  _|  _|  _|    _|      _|  _|  _|  _|    _|  _|      _|  _|    _|  _| #  "<<endl;
    cout << "  # _|    _|  _|    _|    _|      _|    _|  _|  _|  _|    _|      _|    _|_|  _|    _|    _|  _|    _|    _|  _| #  "<<endl;
    cout << "  # _|_|_|      _|_|_|      _|_|    _|_|_|  _|  _|    _|_|_|      _|      _|    _|_|_|      _|        _|_|_|  _| #  "<<endl;
    cout << "  #                                                                                                              #"<<endl;
    cout << "  ################################################################################################################"<<endl;
    cout <<"\n                                        1  2  3  4  5  6  7  8    9  10 11 12 13 14 15 16\n";
    cout <<"                                        ________________________________________________"<<endl;
    cout <<"                                    A  |"<<a1<<"  "<<a2<<"  "<<a3<<"  "<<a4<<"  "<<a5<<"  "<<a6<<"  "<<a7<<"  "<<a8<<" || "<<a9<<"  "<<a10<<"  "<<a11<<"  "<<a12<<"  "<<a13<<"  "<<a14<<"  "<<a15<<"  "<<a16<<"|  A"<<endl;
    cout <<"                                       |                                                |"<<endl;
    cout <<"                                    B  |"<<b1<<"  "<<b2<<"  "<<b3<<"  "<<b4<<"  "<<b5<<"  "<<b6<<"  "<<b7<<"  "<<b8<<" || "<<b9<<"  "<<b10<<"  "<<b11<<"  "<<b12<<"  "<<b13<<"  "<<b14<<"  "<<b15<<"  "<<b16<<"|  B"<<endl;
    cout <<"                                       |                                                |"<<endl;
    cout <<"                                    C  |"<<c1<<"  "<<c2<<"  "<<c3<<"  "<<c4<<"  "<<c5<<"  "<<c6<<"  "<<c7<<"  "<<c8<<" || "<<c9<<"  "<<c10<<"  "<<c11<<"  "<<c12<<"  "<<c13<<"  "<<c14<<"  "<<c15<<"  "<<c16<<"|  C"<<endl;
    cout <<"                                       |                                                |"<<endl;
    cout <<"                                    D  |"<<d1<<"  "<<d2<<"  "<<d3<<"  "<<d4<<"  "<<d5<<"  "<<d6<<"  "<<d7<<"  "<<d8<<" || "<<d9<<"  "<<d10<<"  "<<d11<<"  "<<d12<<"  "<<d13<<"  "<<d14<<"  "<<d15<<"  "<<d16<<"|  D"<<endl;
    cout <<"                                       |                                                |"<<endl;
    cout <<"                                    E  |"<<e1<<"  "<<e2<<"  "<<e3<<"  "<<e4<<"  "<<e5<<"  "<<e6<<"  "<<e7<<"  "<<e8<<" || "<<e9<<"  "<<e10<<"  "<<e11<<"  "<<e12<<"  "<<e13<<"  "<<e14<<"  "<<e15<<"  "<<e16<<"|  E"<<endl;
    cout <<"                                       |                                                |"<<endl;
    cout <<"                                    F  |"<<f1<<"  "<<f2<<"  "<<f3<<"  "<<f4<<"  "<<f5<<"  "<<f6<<"  "<<f7<<"  "<<f8<<" || "<<f9<<"  "<<f10<<"  "<<f11<<"  "<<f12<<"  "<<f13<<"  "<<f14<<"  "<<f15<<"  "<<f16<<"|  F"<<endl;
    cout <<"                                       |                                                |"<<endl;
    cout <<"                                    G  |"<<g1<<"  "<<g2<<"  "<<g3<<"  "<<g4<<"  "<<g5<<"  "<<g6<<"  "<<g7<<"  "<<g8<<" || "<<g9<<"  "<<g10<<"  "<<g11<<"  "<<g12<<"  "<<g13<<"  "<<g14<<"  "<<g15<<"  "<<g16<<"|  G"<<endl;
    cout <<"                                       |                                                |"<<endl;
    cout <<"                                    H  |"<<h1<<"  "<<h2<<"  "<<h3<<"  "<<h4<<"  "<<h5<<"  "<<h6<<"  "<<h7<<"  "<<h8<<" || "<<h9<<"  "<<h10<<"  "<<h11<<"  "<<h12<<"  "<<h13<<"  "<<h14<<"  "<<h15<<"  "<<h16<<"|  H"<<endl;
    cout <<"                                        ************************************************"<<endl;
    cout <<"                                        1  2  3  4  5  6  7  8    9  10 11 12 13 14 15 16\n";
    cout << "\n   Jugador 2, ubica tus barcos: \n\n    - Barco 1: ";
    cin >> barco21;
    cout << "\n    - Barco 2: ";
    cin >> barco22;
    cout << "\n    - Barco 3: ";
    cin >> barco23;
    cout << "\n    - Barco 4: ";
    cin >> barco24;
    cout << "\n   Todos tus barcos han sido ingresados, pulsa enter para continuar a la Batalla Naval!"<< endl;
    _getch();
    system("cls");

    while (naves1!=0 && naves2 !=0){
        cout << "\n\n  ################################################################################################################"<<endl;
        cout << "  #                                                                                                              #"<<endl;
        cout << "  # _|_|_|                _|                _|  _|                _|      _|                                  _| #  "<<endl;
        cout << "  # _|    _|    _|_|_|  _|_|_|_|    _|_|_|  _|  _|    _|_|_|      _|_|    _|    _|_|_|  _|      _|    _|_|_|  _| #  "<<endl;
        cout << "  # _|_|_|    _|    _|    _|      _|    _|  _|  _|  _|    _|      _|  _|  _|  _|    _|  _|      _|  _|    _|  _| #  "<<endl;
        cout << "  # _|    _|  _|    _|    _|      _|    _|  _|  _|  _|    _|      _|    _|_|  _|    _|    _|  _|    _|    _|  _| #  "<<endl;
        cout << "  # _|_|_|      _|_|_|      _|_|    _|_|_|  _|  _|    _|_|_|      _|      _|    _|_|_|      _|        _|_|_|  _| #  "<<endl;
        cout << "  #                                                                                                              #"<<endl;
        cout << "  ################################################################################################################"<<endl;

        cout <<"\n                                        1  2  3  4  5  6  7  8    9  10 11 12 13 14 15 16\n";
    cout <<"                                        ________________________________________________"<<endl;
    cout <<"                                    A  |"<<a1<<"  "<<a2<<"  "<<a3<<"  "<<a4<<"  "<<a5<<"  "<<a6<<"  "<<a7<<"  "<<a8<<" || "<<a9<<"  "<<a10<<"  "<<a11<<"  "<<a12<<"  "<<a13<<"  "<<a14<<"  "<<a15<<"  "<<a16<<"|  A"<<endl;
    cout <<"                                       |                                                |"<<endl;
    cout <<"                                    B  |"<<b1<<"  "<<b2<<"  "<<b3<<"  "<<b4<<"  "<<b5<<"  "<<b6<<"  "<<b7<<"  "<<b8<<" || "<<b9<<"  "<<b10<<"  "<<b11<<"  "<<b12<<"  "<<b13<<"  "<<b14<<"  "<<b15<<"  "<<b16<<"|  B"<<endl;
    cout <<"                                       |                                                |"<<endl;
    cout <<"                                    C  |"<<c1<<"  "<<c2<<"  "<<c3<<"  "<<c4<<"  "<<c5<<"  "<<c6<<"  "<<c7<<"  "<<c8<<" || "<<c9<<"  "<<c10<<"  "<<c11<<"  "<<c12<<"  "<<c13<<"  "<<c14<<"  "<<c15<<"  "<<c16<<"|  C"<<endl;
    cout <<"                                       |                                                |"<<endl;
    cout <<"                                    D  |"<<d1<<"  "<<d2<<"  "<<d3<<"  "<<d4<<"  "<<d5<<"  "<<d6<<"  "<<d7<<"  "<<d8<<" || "<<d9<<"  "<<d10<<"  "<<d11<<"  "<<d12<<"  "<<d13<<"  "<<d14<<"  "<<d15<<"  "<<d16<<"|  D"<<endl;
    cout <<"                                       |                                                |"<<endl;
    cout <<"                                    E  |"<<e1<<"  "<<e2<<"  "<<e3<<"  "<<e4<<"  "<<e5<<"  "<<e6<<"  "<<e7<<"  "<<e8<<" || "<<e9<<"  "<<e10<<"  "<<e11<<"  "<<e12<<"  "<<e13<<"  "<<e14<<"  "<<e15<<"  "<<e16<<"|  E"<<endl;
    cout <<"                                       |                                                |"<<endl;
    cout <<"                                    F  |"<<f1<<"  "<<f2<<"  "<<f3<<"  "<<f4<<"  "<<f5<<"  "<<f6<<"  "<<f7<<"  "<<f8<<" || "<<f9<<"  "<<f10<<"  "<<f11<<"  "<<f12<<"  "<<f13<<"  "<<f14<<"  "<<f15<<"  "<<f16<<"|  F"<<endl;
    cout <<"                                       |                                                |"<<endl;
    cout <<"                                    G  |"<<g1<<"  "<<g2<<"  "<<g3<<"  "<<g4<<"  "<<g5<<"  "<<g6<<"  "<<g7<<"  "<<g8<<" || "<<g9<<"  "<<g10<<"  "<<g11<<"  "<<g12<<"  "<<g13<<"  "<<g14<<"  "<<g15<<"  "<<g16<<"|  G"<<endl;
    cout <<"                                       |                                                |"<<endl;
    cout <<"                                    H  |"<<h1<<"  "<<h2<<"  "<<h3<<"  "<<h4<<"  "<<h5<<"  "<<h6<<"  "<<h7<<"  "<<h8<<" || "<<h9<<"  "<<h10<<"  "<<h11<<"  "<<h12<<"  "<<h13<<"  "<<h14<<"  "<<h15<<"  "<<h16<<"|  H"<<endl;
    cout <<"                                        ************************************************"<<endl;
    cout <<"                                        1  2  3  4  5  6  7  8    9  10 11 12 13 14 15 16\n";
        cout << "\n\n   Denos coordenadas de disparo, capitan: ";
        cin >> shoot;

    if(strcmp(shoot,barco11)==0){
        naves1 -= 1;
        cout << "\n   Objetivo alcanzado, buen disparo!\n    Turno del siguiente jugador"<<endl;
        _getch();
        system("cls");
        if (strcmp(shoot,"a1")==0){
            a1=1;

        }else if (strcmp(shoot,"a1")==0){
            a1=1;

        }else if (strcmp(shoot,"a2")==0){
            a2=1;

        }else if (strcmp(shoot,"a3")==0){
            a3=1;

        }else if (strcmp(shoot,"a4")==0){
            a4=1;

        }else if (strcmp(shoot,"a5")==0){
            a5=1;

        }else if (strcmp(shoot,"a6")==0){
            a6=1;

        }else if (strcmp(shoot,"a7")==0){
            a7=1;

        }else if (strcmp(shoot,"a8")==0){
            a8=1;

        }else if (strcmp(shoot,"a9")==0){
            a9=1;

        }else if (strcmp(shoot,"a10")==0){
            a10=1;

        }else if (strcmp(shoot,"a11")==0){
            a11=1;

        }else if (strcmp(shoot,"a12")==0){
            a12=1;

        }else if (strcmp(shoot,"a13")==0){
            a13=1;

        }else if (strcmp(shoot,"a14")==0){
            a14=1;

        }else if (strcmp(shoot,"a15")==0){
            a15=1;

        }else if (strcmp(shoot,"a16")==0){
            a16=1;

        }else if (strcmp(shoot,"b1")==0){
            b1=1;

        }else if (strcmp(shoot,"b2")==0){
            b2=1;

        }else if (strcmp(shoot,"b3")==0){
            b3=1;

        }else if (strcmp(shoot,"b4")==0){
            b4=1;

        }else if (strcmp(shoot,"b5")==0){
            b5=1;

        }else if (strcmp(shoot,"b6")==0){
            b6=1;

        }else if (strcmp(shoot,"b7")==0){
            b7=1;

        }else if (strcmp(shoot,"b8")==0){
            b8=1;

        }else if (strcmp(shoot,"b9")==0){
            b9=1;

        }else if (strcmp(shoot,"b10")==0){
            b10=1;

        }else if (strcmp(shoot,"b11")==0){
            b11=1;

        }else if (strcmp(shoot,"b12")==0){
            b12=1;

        }else if (strcmp(shoot,"b13")==0){
            b13=1;

        }else if (strcmp(shoot,"b14")==0){
            b14=1;

        }else if (strcmp(shoot,"b15")==0){
            b15=1;

        }else if (strcmp(shoot,"b16")==0){
            b16=1;

        }else if (strcmp(shoot,"c1")==0){
            c1=1;

        }else if (strcmp(shoot,"c2")==0){
            c2=1;

        }else if (strcmp(shoot,"b3")==0){
            b3=1;

        }else if (strcmp(shoot,"c4")==0){
            c4=1;

        }else if (strcmp(shoot,"c5")==0){
            c5=1;

        }else if (strcmp(shoot,"c6")==0){
            c6=1;

        }else if (strcmp(shoot,"c7")==0){
            c7=1;

        }else if (strcmp(shoot,"c8")==0){
            c8=1;

        }else if (strcmp(shoot,"c9")==0){
            c9=1;

        }else if (strcmp(shoot,"c10")==0){
            c10=1;

        }else if (strcmp(shoot,"c11")==0){
            c11=1;

        }else if (strcmp(shoot,"c12")==0){
            c12=1;

        }else if (strcmp(shoot,"c13")==0){
            c13=1;

        }else if (strcmp(shoot,"c14")==0){
            c14=1;

        }else if (strcmp(shoot,"c15")==0){
            c15=1;

        }else if (strcmp(shoot,"c16")==0){
            c16=1;

        }else if (strcmp(shoot,"d1")==0){
            d1=1;

        }else if (strcmp(shoot,"d2")==0){
            d2=1;

        }else if (strcmp(shoot,"d3")==0){
            d3=1;

        }else if (strcmp(shoot,"d4")==0){
            d4=1;

        }else if (strcmp(shoot,"d5")==0){
            d5=1;

        }else if (strcmp(shoot,"d6")==0){
            d6=1;

        }else if (strcmp(shoot,"d7")==0){
            d7=1;

        }else if (strcmp(shoot,"d8")==0){
            d8=1;

        }else if (strcmp(shoot,"d9")==0){
            d9=1;

        }else if (strcmp(shoot,"d10")==0){
            d10=1;

        }else if (strcmp(shoot,"d11")==0){
            d11=1;

        }else if (strcmp(shoot,"d12")==0){
            d12=1;

        }else if (strcmp(shoot,"d13")==0){
            d13=1;

        }else if (strcmp(shoot,"d14")==0){
            d14=1;

        }else if (strcmp(shoot,"d15")==0){
            d15=1;

        }else if (strcmp(shoot,"d16")==0){
            d16=1;

        }else if (strcmp(shoot,"e1")==0){
            e1=1;

        }else if (strcmp(shoot,"e2")==0){
            e2=1;

        }else if (strcmp(shoot,"e3")==0){
            e3=1;

        }else if (strcmp(shoot,"e4")==0){
            e4=1;

        }else if (strcmp(shoot,"e5")==0){
            e5=1;

        }else if (strcmp(shoot,"e6")==0){
            e6=1;

        }else if (strcmp(shoot,"e7")==0){
            e7=1;

        }else if (strcmp(shoot,"e8")==0){
            e8=1;

        }else if (strcmp(shoot,"e9")==0){
            e9=1;

        }else if (strcmp(shoot,"e10")==0){
            e10=1;

        }else if (strcmp(shoot,"e11")==0){
            e11=1;

        }else if (strcmp(shoot,"e12")==0){
            e12=1;

        }else if (strcmp(shoot,"e13")==0){
            e13=1;

        }else if (strcmp(shoot,"e14")==0){
            e14=1;

        }else if (strcmp(shoot,"e15")==0){
            e15=1;

        }else if (strcmp(shoot,"e16")==0){
            e16=1;

        }else if (strcmp(shoot,"f1")==0){
            f1=1;

        }else if (strcmp(shoot,"f2")==0){
            f2=1;

        }else if (strcmp(shoot,"f3")==0){
            f3=1;

        }else if (strcmp(shoot,"f4")==0){
            f4=1;

        }else if (strcmp(shoot,"f5")==0){
            f5=1;

        }else if (strcmp(shoot,"f6")==0){
            f6=1;

        }else if (strcmp(shoot,"f7")==0){
            f7=1;

        }else if (strcmp(shoot,"f8")==0){
            f8=1;

        }else if (strcmp(shoot,"f9")==0){
            f9=1;

        }else if (strcmp(shoot,"f10")==0){
            f10=1;

        }else if (strcmp(shoot,"f11")==0){
            f11=1;

        }else if (strcmp(shoot,"f12")==0){
            f12=1;

        }else if (strcmp(shoot,"f13")==0){
            f13=1;

        }else if (strcmp(shoot,"f14")==0){
            f14=1;

        }else if (strcmp(shoot,"f15")==0){
            f15=1;

        }else if (strcmp(shoot,"f16")==0){
            f16=1;

        }else if (strcmp(shoot,"g1")==0){
            g1=1;

        }else if (strcmp(shoot,"g2")==0){
            g2=1;

        }else if (strcmp(shoot,"g3")==0){
            g3=1;

        }else if (strcmp(shoot,"g4")==0){
            g4=1;

        }else if (strcmp(shoot,"g5")==0){
            g5=1;

        }else if (strcmp(shoot,"g6")==0){
            g6=1;

        }else if (strcmp(shoot,"g7")==0){
            g7=1;

        }else if (strcmp(shoot,"g8")==0){
            g8=1;

        }else if (strcmp(shoot,"g9")==0){
            g9=1;

        }else if (strcmp(shoot,"g10")==0){
            g10=1;

        }else if (strcmp(shoot,"g11")==0){
            g11=1;

        }else if (strcmp(shoot,"g12")==0){
            g12=1;

        }else if (strcmp(shoot,"g13")==0){
            g13=1;

        }else if (strcmp(shoot,"g14")==0){
            g14=1;

        }else if (strcmp(shoot,"g15")==0){
            g15=1;

        }else if (strcmp(shoot,"g16")==0){
            g16=1;

        }else if (strcmp(shoot,"h1")==0){
            h1=1;

        }else if (strcmp(shoot,"h2")==0){
            h2=1;

        }else if (strcmp(shoot,"h3")==0){
            h3=1;

        }else if (strcmp(shoot,"h4")==0){
            h4=1;

        }else if (strcmp(shoot,"h5")==0){
            h5=1;

        }else if (strcmp(shoot,"h6")==0){
            h6=1;

        }else if (strcmp(shoot,"h7")==0){
            h7=1;

        }else if (strcmp(shoot,"h8")==0){
            h8=1;

        }else if (strcmp(shoot,"h9")==0){
            h9=1;

        }else if (strcmp(shoot,"h10")==0){
            h10=1;

        }else if (strcmp(shoot,"h11")==0){
            h11=1;

        }else if (strcmp(shoot,"h12")==0){
            h12=1;

        }else if (strcmp(shoot,"h13")==0){
            h13=1;

        }else if (strcmp(shoot,"h14")==0){
            h14=1;

        }else if (strcmp(shoot,"h15")==0){
            h15=1;

        }else if (strcmp(shoot,"h16")==0){
            h16=1;

        }else{}
    }else if(strcmp(shoot,barco12)==0){
        naves1 -= 1;
        cout << "\n   Objetivo alcanzado, buen disparo!\n    Turno del siguiente jugador"<<endl;
        _getch();
        system("cls");
        if (strcmp(shoot,"a1")==0){
            a1=1;

        }else if (strcmp(shoot,"a1")==0){
            a1=1;

        }else if (strcmp(shoot,"a2")==0){
            a2=1;

        }else if (strcmp(shoot,"a3")==0){
            a3=1;

        }else if (strcmp(shoot,"a4")==0){
            a4=1;

        }else if (strcmp(shoot,"a5")==0){
            a5=1;

        }else if (strcmp(shoot,"a6")==0){
            a6=1;

        }else if (strcmp(shoot,"a7")==0){
            a7=1;

        }else if (strcmp(shoot,"a8")==0){
            a8=1;

        }else if (strcmp(shoot,"a9")==0){
            a9=1;

        }else if (strcmp(shoot,"a10")==0){
            a10=1;

        }else if (strcmp(shoot,"a11")==0){
            a11=1;

        }else if (strcmp(shoot,"a12")==0){
            a12=1;

        }else if (strcmp(shoot,"a13")==0){
            a13=1;

        }else if (strcmp(shoot,"a14")==0){
            a14=1;

        }else if (strcmp(shoot,"a15")==0){
            a15=1;

        }else if (strcmp(shoot,"a16")==0){
            a16=1;

        }else if (strcmp(shoot,"b1")==0){
            b1=1;

        }else if (strcmp(shoot,"b2")==0){
            b2=1;

        }else if (strcmp(shoot,"b3")==0){
            b3=1;

        }else if (strcmp(shoot,"b4")==0){
            b4=1;

        }else if (strcmp(shoot,"b5")==0){
            b5=1;

        }else if (strcmp(shoot,"b6")==0){
            b6=1;

        }else if (strcmp(shoot,"b7")==0){
            b7=1;

        }else if (strcmp(shoot,"b8")==0){
            b8=1;

        }else if (strcmp(shoot,"b9")==0){
            b9=1;

        }else if (strcmp(shoot,"b10")==0){
            b10=1;

        }else if (strcmp(shoot,"b11")==0){
            b11=1;

        }else if (strcmp(shoot,"b12")==0){
            b12=1;

        }else if (strcmp(shoot,"b13")==0){
            b13=1;

        }else if (strcmp(shoot,"b14")==0){
            b14=1;

        }else if (strcmp(shoot,"b15")==0){
            b15=1;

        }else if (strcmp(shoot,"b16")==0){
            b16=1;

        }else if (strcmp(shoot,"c1")==0){
            c1=1;

        }else if (strcmp(shoot,"c2")==0){
            c2=1;

        }else if (strcmp(shoot,"b3")==0){
            b3=1;

        }else if (strcmp(shoot,"c4")==0){
            c4=1;

        }else if (strcmp(shoot,"c5")==0){
            c5=1;

        }else if (strcmp(shoot,"c6")==0){
            c6=1;

        }else if (strcmp(shoot,"c7")==0){
            c7=1;

        }else if (strcmp(shoot,"c8")==0){
            c8=1;

        }else if (strcmp(shoot,"c9")==0){
            c9=1;

        }else if (strcmp(shoot,"c10")==0){
            c10=1;

        }else if (strcmp(shoot,"c11")==0){
            c11=1;

        }else if (strcmp(shoot,"c12")==0){
            c12=1;

        }else if (strcmp(shoot,"c13")==0){
            c13=1;

        }else if (strcmp(shoot,"c14")==0){
            c14=1;

        }else if (strcmp(shoot,"c15")==0){
            c15=1;

        }else if (strcmp(shoot,"c16")==0){
            c16=1;

        }else if (strcmp(shoot,"d1")==0){
            d1=1;

        }else if (strcmp(shoot,"d2")==0){
            d2=1;

        }else if (strcmp(shoot,"d3")==0){
            d3=1;

        }else if (strcmp(shoot,"d4")==0){
            d4=1;

        }else if (strcmp(shoot,"d5")==0){
            d5=1;

        }else if (strcmp(shoot,"d6")==0){
            d6=1;

        }else if (strcmp(shoot,"d7")==0){
            d7=1;

        }else if (strcmp(shoot,"d8")==0){
            d8=1;

        }else if (strcmp(shoot,"d9")==0){
            d9=1;

        }else if (strcmp(shoot,"d10")==0){
            d10=1;

        }else if (strcmp(shoot,"d11")==0){
            d11=1;

        }else if (strcmp(shoot,"d12")==0){
            d12=1;

        }else if (strcmp(shoot,"d13")==0){
            d13=1;

        }else if (strcmp(shoot,"d14")==0){
            d14=1;

        }else if (strcmp(shoot,"d15")==0){
            d15=1;

        }else if (strcmp(shoot,"d16")==0){
            d16=1;

        }else if (strcmp(shoot,"e1")==0){
            e1=1;

        }else if (strcmp(shoot,"e2")==0){
            e2=1;

        }else if (strcmp(shoot,"e3")==0){
            e3=1;

        }else if (strcmp(shoot,"e4")==0){
            e4=1;

        }else if (strcmp(shoot,"e5")==0){
            e5=1;

        }else if (strcmp(shoot,"e6")==0){
            e6=1;

        }else if (strcmp(shoot,"e7")==0){
            e7=1;

        }else if (strcmp(shoot,"e8")==0){
            e8=1;

        }else if (strcmp(shoot,"e9")==0){
            e9=1;

        }else if (strcmp(shoot,"e10")==0){
            e10=1;

        }else if (strcmp(shoot,"e11")==0){
            e11=1;

        }else if (strcmp(shoot,"e12")==0){
            e12=1;

        }else if (strcmp(shoot,"e13")==0){
            e13=1;

        }else if (strcmp(shoot,"e14")==0){
            e14=1;

        }else if (strcmp(shoot,"e15")==0){
            e15=1;

        }else if (strcmp(shoot,"e16")==0){
            e16=1;

        }else if (strcmp(shoot,"f1")==0){
            f1=1;

        }else if (strcmp(shoot,"f2")==0){
            f2=1;

        }else if (strcmp(shoot,"f3")==0){
            f3=1;

        }else if (strcmp(shoot,"f4")==0){
            f4=1;

        }else if (strcmp(shoot,"f5")==0){
            f5=1;

        }else if (strcmp(shoot,"f6")==0){
            f6=1;

        }else if (strcmp(shoot,"f7")==0){
            f7=1;

        }else if (strcmp(shoot,"f8")==0){
            f8=1;

        }else if (strcmp(shoot,"f9")==0){
            f9=1;

        }else if (strcmp(shoot,"f10")==0){
            f10=1;

        }else if (strcmp(shoot,"f11")==0){
            f11=1;

        }else if (strcmp(shoot,"f12")==0){
            f12=1;

        }else if (strcmp(shoot,"f13")==0){
            f13=1;

        }else if (strcmp(shoot,"f14")==0){
            f14=1;

        }else if (strcmp(shoot,"f15")==0){
            f15=1;

        }else if (strcmp(shoot,"f16")==0){
            f16=1;

        }else if (strcmp(shoot,"g1")==0){
            g1=1;

        }else if (strcmp(shoot,"g2")==0){
            g2=1;

        }else if (strcmp(shoot,"g3")==0){
            g3=1;

        }else if (strcmp(shoot,"g4")==0){
            g4=1;

        }else if (strcmp(shoot,"g5")==0){
            g5=1;

        }else if (strcmp(shoot,"g6")==0){
            g6=1;

        }else if (strcmp(shoot,"g7")==0){
            g7=1;

        }else if (strcmp(shoot,"g8")==0){
            g8=1;

        }else if (strcmp(shoot,"g9")==0){
            g9=1;

        }else if (strcmp(shoot,"g10")==0){
            g10=1;

        }else if (strcmp(shoot,"g11")==0){
            g11=1;

        }else if (strcmp(shoot,"g12")==0){
            g12=1;

        }else if (strcmp(shoot,"g13")==0){
            g13=1;

        }else if (strcmp(shoot,"g14")==0){
            g14=1;

        }else if (strcmp(shoot,"g15")==0){
            g15=1;

        }else if (strcmp(shoot,"g16")==0){
            g16=1;

        }else if (strcmp(shoot,"h1")==0){
            h1=1;

        }else if (strcmp(shoot,"h2")==0){
            h2=1;

        }else if (strcmp(shoot,"h3")==0){
            h3=1;

        }else if (strcmp(shoot,"h4")==0){
            h4=1;

        }else if (strcmp(shoot,"h5")==0){
            h5=1;

        }else if (strcmp(shoot,"h6")==0){
            h6=1;

        }else if (strcmp(shoot,"h7")==0){
            h7=1;

        }else if (strcmp(shoot,"h8")==0){
            h8=1;

        }else if (strcmp(shoot,"h9")==0){
            h9=1;

        }else if (strcmp(shoot,"h10")==0){
            h10=1;

        }else if (strcmp(shoot,"h11")==0){
            h11=1;

        }else if (strcmp(shoot,"h12")==0){
            h12=1;

        }else if (strcmp(shoot,"h13")==0){
            h13=1;

        }else if (strcmp(shoot,"h14")==0){
            h14=1;

        }else if (strcmp(shoot,"h15")==0){
            h15=1;

        }else if (strcmp(shoot,"h16")==0){
            h16=1;

        }else{}
    }else if(strcmp(shoot,barco13)==0){
        naves1 -= 1;
        cout << "\n   Objetivo alcanzado, buen disparo!\n    Turno del siguiente jugador"<<endl;
        _getch();
        system("cls");
        if (strcmp(shoot,"a1")==0){
            a1=1;

        }else if (strcmp(shoot,"a1")==0){
            a1=1;

        }else if (strcmp(shoot,"a2")==0){
            a2=1;

        }else if (strcmp(shoot,"a3")==0){
            a3=1;

        }else if (strcmp(shoot,"a4")==0){
            a4=1;

        }else if (strcmp(shoot,"a5")==0){
            a5=1;

        }else if (strcmp(shoot,"a6")==0){
            a6=1;

        }else if (strcmp(shoot,"a7")==0){
            a7=1;

        }else if (strcmp(shoot,"a8")==0){
            a8=1;

        }else if (strcmp(shoot,"a9")==0){
            a9=1;

        }else if (strcmp(shoot,"a10")==0){
            a10=1;

        }else if (strcmp(shoot,"a11")==0){
            a11=1;

        }else if (strcmp(shoot,"a12")==0){
            a12=1;

        }else if (strcmp(shoot,"a13")==0){
            a13=1;

        }else if (strcmp(shoot,"a14")==0){
            a14=1;

        }else if (strcmp(shoot,"a15")==0){
            a15=1;

        }else if (strcmp(shoot,"a16")==0){
            a16=1;

        }else if (strcmp(shoot,"b1")==0){
            b1=1;

        }else if (strcmp(shoot,"b2")==0){
            b2=1;

        }else if (strcmp(shoot,"b3")==0){
            b3=1;

        }else if (strcmp(shoot,"b4")==0){
            b4=1;

        }else if (strcmp(shoot,"b5")==0){
            b5=1;

        }else if (strcmp(shoot,"b6")==0){
            b6=1;

        }else if (strcmp(shoot,"b7")==0){
            b7=1;

        }else if (strcmp(shoot,"b8")==0){
            b8=1;

        }else if (strcmp(shoot,"b9")==0){
            b9=1;

        }else if (strcmp(shoot,"b10")==0){
            b10=1;

        }else if (strcmp(shoot,"b11")==0){
            b11=1;

        }else if (strcmp(shoot,"b12")==0){
            b12=1;

        }else if (strcmp(shoot,"b13")==0){
            b13=1;

        }else if (strcmp(shoot,"b14")==0){
            b14=1;

        }else if (strcmp(shoot,"b15")==0){
            b15=1;

        }else if (strcmp(shoot,"b16")==0){
            b16=1;

        }else if (strcmp(shoot,"c1")==0){
            c1=1;

        }else if (strcmp(shoot,"c2")==0){
            c2=1;

        }else if (strcmp(shoot,"b3")==0){
            b3=1;

        }else if (strcmp(shoot,"c4")==0){
            c4=1;

        }else if (strcmp(shoot,"c5")==0){
            c5=1;

        }else if (strcmp(shoot,"c6")==0){
            c6=1;

        }else if (strcmp(shoot,"c7")==0){
            c7=1;

        }else if (strcmp(shoot,"c8")==0){
            c8=1;

        }else if (strcmp(shoot,"c9")==0){
            c9=1;

        }else if (strcmp(shoot,"c10")==0){
            c10=1;

        }else if (strcmp(shoot,"c11")==0){
            c11=1;

        }else if (strcmp(shoot,"c12")==0){
            c12=1;

        }else if (strcmp(shoot,"c13")==0){
            c13=1;

        }else if (strcmp(shoot,"c14")==0){
            c14=1;

        }else if (strcmp(shoot,"c15")==0){
            c15=1;

        }else if (strcmp(shoot,"c16")==0){
            c16=1;

        }else if (strcmp(shoot,"d1")==0){
            d1=1;

        }else if (strcmp(shoot,"d2")==0){
            d2=1;

        }else if (strcmp(shoot,"d3")==0){
            d3=1;

        }else if (strcmp(shoot,"d4")==0){
            d4=1;

        }else if (strcmp(shoot,"d5")==0){
            d5=1;

        }else if (strcmp(shoot,"d6")==0){
            d6=1;

        }else if (strcmp(shoot,"d7")==0){
            d7=1;

        }else if (strcmp(shoot,"d8")==0){
            d8=1;

        }else if (strcmp(shoot,"d9")==0){
            d9=1;

        }else if (strcmp(shoot,"d10")==0){
            d10=1;

        }else if (strcmp(shoot,"d11")==0){
            d11=1;

        }else if (strcmp(shoot,"d12")==0){
            d12=1;

        }else if (strcmp(shoot,"d13")==0){
            d13=1;

        }else if (strcmp(shoot,"d14")==0){
            d14=1;

        }else if (strcmp(shoot,"d15")==0){
            d15=1;

        }else if (strcmp(shoot,"d16")==0){
            d16=1;

        }else if (strcmp(shoot,"e1")==0){
            e1=1;

        }else if (strcmp(shoot,"e2")==0){
            e2=1;

        }else if (strcmp(shoot,"e3")==0){
            e3=1;

        }else if (strcmp(shoot,"e4")==0){
            e4=1;

        }else if (strcmp(shoot,"e5")==0){
            e5=1;

        }else if (strcmp(shoot,"e6")==0){
            e6=1;

        }else if (strcmp(shoot,"e7")==0){
            e7=1;

        }else if (strcmp(shoot,"e8")==0){
            e8=1;

        }else if (strcmp(shoot,"e9")==0){
            e9=1;

        }else if (strcmp(shoot,"e10")==0){
            e10=1;

        }else if (strcmp(shoot,"e11")==0){
            e11=1;

        }else if (strcmp(shoot,"e12")==0){
            e12=1;

        }else if (strcmp(shoot,"e13")==0){
            e13=1;

        }else if (strcmp(shoot,"e14")==0){
            e14=1;

        }else if (strcmp(shoot,"e15")==0){
            e15=1;

        }else if (strcmp(shoot,"e16")==0){
            e16=1;

        }else if (strcmp(shoot,"f1")==0){
            f1=1;

        }else if (strcmp(shoot,"f2")==0){
            f2=1;

        }else if (strcmp(shoot,"f3")==0){
            f3=1;

        }else if (strcmp(shoot,"f4")==0){
            f4=1;

        }else if (strcmp(shoot,"f5")==0){
            f5=1;

        }else if (strcmp(shoot,"f6")==0){
            f6=1;

        }else if (strcmp(shoot,"f7")==0){
            f7=1;

        }else if (strcmp(shoot,"f8")==0){
            f8=1;

        }else if (strcmp(shoot,"f9")==0){
            f9=1;

        }else if (strcmp(shoot,"f10")==0){
            f10=1;

        }else if (strcmp(shoot,"f11")==0){
            f11=1;

        }else if (strcmp(shoot,"f12")==0){
            f12=1;

        }else if (strcmp(shoot,"f13")==0){
            f13=1;

        }else if (strcmp(shoot,"f14")==0){
            f14=1;

        }else if (strcmp(shoot,"f15")==0){
            f15=1;

        }else if (strcmp(shoot,"f16")==0){
            f16=1;

        }else if (strcmp(shoot,"g1")==0){
            g1=1;

        }else if (strcmp(shoot,"g2")==0){
            g2=1;

        }else if (strcmp(shoot,"g3")==0){
            g3=1;

        }else if (strcmp(shoot,"g4")==0){
            g4=1;

        }else if (strcmp(shoot,"g5")==0){
            g5=1;

        }else if (strcmp(shoot,"g6")==0){
            g6=1;

        }else if (strcmp(shoot,"g7")==0){
            g7=1;

        }else if (strcmp(shoot,"g8")==0){
            g8=1;

        }else if (strcmp(shoot,"g9")==0){
            g9=1;

        }else if (strcmp(shoot,"g10")==0){
            g10=1;

        }else if (strcmp(shoot,"g11")==0){
            g11=1;

        }else if (strcmp(shoot,"g12")==0){
            g12=1;

        }else if (strcmp(shoot,"g13")==0){
            g13=1;

        }else if (strcmp(shoot,"g14")==0){
            g14=1;

        }else if (strcmp(shoot,"g15")==0){
            g15=1;

        }else if (strcmp(shoot,"g16")==0){
            g16=1;

        }else if (strcmp(shoot,"h1")==0){
            h1=1;

        }else if (strcmp(shoot,"h2")==0){
            h2=1;

        }else if (strcmp(shoot,"h3")==0){
            h3=1;

        }else if (strcmp(shoot,"h4")==0){
            h4=1;

        }else if (strcmp(shoot,"h5")==0){
            h5=1;

        }else if (strcmp(shoot,"h6")==0){
            h6=1;

        }else if (strcmp(shoot,"h7")==0){
            h7=1;

        }else if (strcmp(shoot,"h8")==0){
            h8=1;

        }else if (strcmp(shoot,"h9")==0){
            h9=1;

        }else if (strcmp(shoot,"h10")==0){
            h10=1;

        }else if (strcmp(shoot,"h11")==0){
            h11=1;

        }else if (strcmp(shoot,"h12")==0){
            h12=1;

        }else if (strcmp(shoot,"h13")==0){
            h13=1;

        }else if (strcmp(shoot,"h14")==0){
            h14=1;

        }else if (strcmp(shoot,"h15")==0){
            h15=1;

        }else if (strcmp(shoot,"h16")==0){
            h16=1;

        }else{}
    }else if(strcmp(shoot,barco14)==0){
        naves1 -= 1;
        cout << "\n   Objetivo alcanzado, buen disparo!\n    Turno del siguiente jugador"<<endl;
        _getch();
        system("cls");
        if (strcmp(shoot,"a1")==0){
            a1=1;

        }else if (strcmp(shoot,"a1")==0){
            a1=1;

        }else if (strcmp(shoot,"a2")==0){
            a2=1;

        }else if (strcmp(shoot,"a3")==0){
            a3=1;

        }else if (strcmp(shoot,"a4")==0){
            a4=1;

        }else if (strcmp(shoot,"a5")==0){
            a5=1;

        }else if (strcmp(shoot,"a6")==0){
            a6=1;

        }else if (strcmp(shoot,"a7")==0){
            a7=1;

        }else if (strcmp(shoot,"a8")==0){
            a8=1;

        }else if (strcmp(shoot,"a9")==0){
            a9=1;

        }else if (strcmp(shoot,"a10")==0){
            a10=1;

        }else if (strcmp(shoot,"a11")==0){
            a11=1;

        }else if (strcmp(shoot,"a12")==0){
            a12=1;

        }else if (strcmp(shoot,"a13")==0){
            a13=1;

        }else if (strcmp(shoot,"a14")==0){
            a14=1;

        }else if (strcmp(shoot,"a15")==0){
            a15=1;

        }else if (strcmp(shoot,"a16")==0){
            a16=1;

        }else if (strcmp(shoot,"b1")==0){
            b1=1;

        }else if (strcmp(shoot,"b2")==0){
            b2=1;

        }else if (strcmp(shoot,"b3")==0){
            b3=1;

        }else if (strcmp(shoot,"b4")==0){
            b4=1;

        }else if (strcmp(shoot,"b5")==0){
            b5=1;

        }else if (strcmp(shoot,"b6")==0){
            b6=1;

        }else if (strcmp(shoot,"b7")==0){
            b7=1;

        }else if (strcmp(shoot,"b8")==0){
            b8=1;

        }else if (strcmp(shoot,"b9")==0){
            b9=1;

        }else if (strcmp(shoot,"b10")==0){
            b10=1;

        }else if (strcmp(shoot,"b11")==0){
            b11=1;

        }else if (strcmp(shoot,"b12")==0){
            b12=1;

        }else if (strcmp(shoot,"b13")==0){
            b13=1;

        }else if (strcmp(shoot,"b14")==0){
            b14=1;

        }else if (strcmp(shoot,"b15")==0){
            b15=1;

        }else if (strcmp(shoot,"b16")==0){
            b16=1;

        }else if (strcmp(shoot,"c1")==0){
            c1=1;

        }else if (strcmp(shoot,"c2")==0){
            c2=1;

        }else if (strcmp(shoot,"b3")==0){
            b3=1;

        }else if (strcmp(shoot,"c4")==0){
            c4=1;

        }else if (strcmp(shoot,"c5")==0){
            c5=1;

        }else if (strcmp(shoot,"c6")==0){
            c6=1;

        }else if (strcmp(shoot,"c7")==0){
            c7=1;

        }else if (strcmp(shoot,"c8")==0){
            c8=1;

        }else if (strcmp(shoot,"c9")==0){
            c9=1;

        }else if (strcmp(shoot,"c10")==0){
            c10=1;

        }else if (strcmp(shoot,"c11")==0){
            c11=1;

        }else if (strcmp(shoot,"c12")==0){
            c12=1;

        }else if (strcmp(shoot,"c13")==0){
            c13=1;

        }else if (strcmp(shoot,"c14")==0){
            c14=1;

        }else if (strcmp(shoot,"c15")==0){
            c15=1;

        }else if (strcmp(shoot,"c16")==0){
            c16=1;

        }else if (strcmp(shoot,"d1")==0){
            d1=1;

        }else if (strcmp(shoot,"d2")==0){
            d2=1;

        }else if (strcmp(shoot,"d3")==0){
            d3=1;

        }else if (strcmp(shoot,"d4")==0){
            d4=1;

        }else if (strcmp(shoot,"d5")==0){
            d5=1;

        }else if (strcmp(shoot,"d6")==0){
            d6=1;

        }else if (strcmp(shoot,"d7")==0){
            d7=1;

        }else if (strcmp(shoot,"d8")==0){
            d8=1;

        }else if (strcmp(shoot,"d9")==0){
            d9=1;

        }else if (strcmp(shoot,"d10")==0){
            d10=1;

        }else if (strcmp(shoot,"d11")==0){
            d11=1;

        }else if (strcmp(shoot,"d12")==0){
            d12=1;

        }else if (strcmp(shoot,"d13")==0){
            d13=1;

        }else if (strcmp(shoot,"d14")==0){
            d14=1;

        }else if (strcmp(shoot,"d15")==0){
            d15=1;

        }else if (strcmp(shoot,"d16")==0){
            d16=1;

        }else if (strcmp(shoot,"e1")==0){
            e1=1;

        }else if (strcmp(shoot,"e2")==0){
            e2=1;

        }else if (strcmp(shoot,"e3")==0){
            e3=1;

        }else if (strcmp(shoot,"e4")==0){
            e4=1;

        }else if (strcmp(shoot,"e5")==0){
            e5=1;

        }else if (strcmp(shoot,"e6")==0){
            e6=1;

        }else if (strcmp(shoot,"e7")==0){
            e7=1;

        }else if (strcmp(shoot,"e8")==0){
            e8=1;

        }else if (strcmp(shoot,"e9")==0){
            e9=1;

        }else if (strcmp(shoot,"e10")==0){
            e10=1;

        }else if (strcmp(shoot,"e11")==0){
            e11=1;

        }else if (strcmp(shoot,"e12")==0){
            e12=1;

        }else if (strcmp(shoot,"e13")==0){
            e13=1;

        }else if (strcmp(shoot,"e14")==0){
            e14=1;

        }else if (strcmp(shoot,"e15")==0){
            e15=1;

        }else if (strcmp(shoot,"e16")==0){
            e16=1;

        }else if (strcmp(shoot,"f1")==0){
            f1=1;

        }else if (strcmp(shoot,"f2")==0){
            f2=1;

        }else if (strcmp(shoot,"f3")==0){
            f3=1;

        }else if (strcmp(shoot,"f4")==0){
            f4=1;

        }else if (strcmp(shoot,"f5")==0){
            f5=1;

        }else if (strcmp(shoot,"f6")==0){
            f6=1;

        }else if (strcmp(shoot,"f7")==0){
            f7=1;

        }else if (strcmp(shoot,"f8")==0){
            f8=1;

        }else if (strcmp(shoot,"f9")==0){
            f9=1;

        }else if (strcmp(shoot,"f10")==0){
            f10=1;

        }else if (strcmp(shoot,"f11")==0){
            f11=1;

        }else if (strcmp(shoot,"f12")==0){
            f12=1;

        }else if (strcmp(shoot,"f13")==0){
            f13=1;

        }else if (strcmp(shoot,"f14")==0){
            f14=1;

        }else if (strcmp(shoot,"f15")==0){
            f15=1;

        }else if (strcmp(shoot,"f16")==0){
            f16=1;

        }else if (strcmp(shoot,"g1")==0){
            g1=1;

        }else if (strcmp(shoot,"g2")==0){
            g2=1;

        }else if (strcmp(shoot,"g3")==0){
            g3=1;

        }else if (strcmp(shoot,"g4")==0){
            g4=1;

        }else if (strcmp(shoot,"g5")==0){
            g5=1;

        }else if (strcmp(shoot,"g6")==0){
            g6=1;

        }else if (strcmp(shoot,"g7")==0){
            g7=1;

        }else if (strcmp(shoot,"g8")==0){
            g8=1;

        }else if (strcmp(shoot,"g9")==0){
            g9=1;

        }else if (strcmp(shoot,"g10")==0){
            g10=1;

        }else if (strcmp(shoot,"g11")==0){
            g11=1;

        }else if (strcmp(shoot,"g12")==0){
            g12=1;

        }else if (strcmp(shoot,"g13")==0){
            g13=1;

        }else if (strcmp(shoot,"g14")==0){
            g14=1;

        }else if (strcmp(shoot,"g15")==0){
            g15=1;

        }else if (strcmp(shoot,"g16")==0){
            g16=1;

        }else if (strcmp(shoot,"h1")==0){
            h1=1;

        }else if (strcmp(shoot,"h2")==0){
            h2=1;

        }else if (strcmp(shoot,"h3")==0){
            h3=1;

        }else if (strcmp(shoot,"h4")==0){
            h4=1;

        }else if (strcmp(shoot,"h5")==0){
            h5=1;

        }else if (strcmp(shoot,"h6")==0){
            h6=1;

        }else if (strcmp(shoot,"h7")==0){
            h7=1;

        }else if (strcmp(shoot,"h8")==0){
            h8=1;

        }else if (strcmp(shoot,"h9")==0){
            h9=1;

        }else if (strcmp(shoot,"h10")==0){
            h10=1;

        }else if (strcmp(shoot,"h11")==0){
            h11=1;

        }else if (strcmp(shoot,"h12")==0){
            h12=1;

        }else if (strcmp(shoot,"h13")==0){
            h13=1;

        }else if (strcmp(shoot,"h14")==0){
            h14=1;

        }else if (strcmp(shoot,"h15")==0){
            h15=1;

        }else if (strcmp(shoot,"h16")==0){
            h16=1;

        }else{}
    }else if(strcmp(shoot,barco21)==0){
        naves2 -= 1;
        cout << "\n   Objetivo alcanzado, buen disparo!\n    Turno del siguiente jugador"<<endl;
        _getch();
        system("cls");
        if (strcmp(shoot,"a1")==0){
            a1=1;

        }else if (strcmp(shoot,"a1")==0){
            a1=1;

        }else if (strcmp(shoot,"a2")==0){
            a2=1;

        }else if (strcmp(shoot,"a3")==0){
            a3=1;

        }else if (strcmp(shoot,"a4")==0){
            a4=1;

        }else if (strcmp(shoot,"a5")==0){
            a5=1;

        }else if (strcmp(shoot,"a6")==0){
            a6=1;

        }else if (strcmp(shoot,"a7")==0){
            a7=1;

        }else if (strcmp(shoot,"a8")==0){
            a8=1;

        }else if (strcmp(shoot,"a9")==0){
            a9=1;

        }else if (strcmp(shoot,"a10")==0){
            a10=1;

        }else if (strcmp(shoot,"a11")==0){
            a11=1;

        }else if (strcmp(shoot,"a12")==0){
            a12=1;

        }else if (strcmp(shoot,"a13")==0){
            a13=1;

        }else if (strcmp(shoot,"a14")==0){
            a14=1;

        }else if (strcmp(shoot,"a15")==0){
            a15=1;

        }else if (strcmp(shoot,"a16")==0){
            a16=1;

        }else if (strcmp(shoot,"b1")==0){
            b1=1;

        }else if (strcmp(shoot,"b2")==0){
            b2=1;

        }else if (strcmp(shoot,"b3")==0){
            b3=1;

        }else if (strcmp(shoot,"b4")==0){
            b4=1;

        }else if (strcmp(shoot,"b5")==0){
            b5=1;

        }else if (strcmp(shoot,"b6")==0){
            b6=1;

        }else if (strcmp(shoot,"b7")==0){
            b7=1;

        }else if (strcmp(shoot,"b8")==0){
            b8=1;

        }else if (strcmp(shoot,"b9")==0){
            b9=1;

        }else if (strcmp(shoot,"b10")==0){
            b10=1;

        }else if (strcmp(shoot,"b11")==0){
            b11=1;

        }else if (strcmp(shoot,"b12")==0){
            b12=1;

        }else if (strcmp(shoot,"b13")==0){
            b13=1;

        }else if (strcmp(shoot,"b14")==0){
            b14=1;

        }else if (strcmp(shoot,"b15")==0){
            b15=1;

        }else if (strcmp(shoot,"b16")==0){
            b16=1;

        }else if (strcmp(shoot,"c1")==0){
            c1=1;

        }else if (strcmp(shoot,"c2")==0){
            c2=1;

        }else if (strcmp(shoot,"b3")==0){
            b3=1;

        }else if (strcmp(shoot,"c4")==0){
            c4=1;

        }else if (strcmp(shoot,"c5")==0){
            c5=1;

        }else if (strcmp(shoot,"c6")==0){
            c6=1;

        }else if (strcmp(shoot,"c7")==0){
            c7=1;

        }else if (strcmp(shoot,"c8")==0){
            c8=1;

        }else if (strcmp(shoot,"c9")==0){
            c9=1;

        }else if (strcmp(shoot,"c10")==0){
            c10=1;

        }else if (strcmp(shoot,"c11")==0){
            c11=1;

        }else if (strcmp(shoot,"c12")==0){
            c12=1;

        }else if (strcmp(shoot,"c13")==0){
            c13=1;

        }else if (strcmp(shoot,"c14")==0){
            c14=1;

        }else if (strcmp(shoot,"c15")==0){
            c15=1;

        }else if (strcmp(shoot,"c16")==0){
            c16=1;

        }else if (strcmp(shoot,"d1")==0){
            d1=1;

        }else if (strcmp(shoot,"d2")==0){
            d2=1;

        }else if (strcmp(shoot,"d3")==0){
            d3=1;

        }else if (strcmp(shoot,"d4")==0){
            d4=1;

        }else if (strcmp(shoot,"d5")==0){
            d5=1;

        }else if (strcmp(shoot,"d6")==0){
            d6=1;

        }else if (strcmp(shoot,"d7")==0){
            d7=1;

        }else if (strcmp(shoot,"d8")==0){
            d8=1;

        }else if (strcmp(shoot,"d9")==0){
            d9=1;

        }else if (strcmp(shoot,"d10")==0){
            d10=1;

        }else if (strcmp(shoot,"d11")==0){
            d11=1;

        }else if (strcmp(shoot,"d12")==0){
            d12=1;

        }else if (strcmp(shoot,"d13")==0){
            d13=1;

        }else if (strcmp(shoot,"d14")==0){
            d14=1;

        }else if (strcmp(shoot,"d15")==0){
            d15=1;

        }else if (strcmp(shoot,"d16")==0){
            d16=1;

        }else if (strcmp(shoot,"e1")==0){
            e1=1;

        }else if (strcmp(shoot,"e2")==0){
            e2=1;

        }else if (strcmp(shoot,"e3")==0){
            e3=1;

        }else if (strcmp(shoot,"e4")==0){
            e4=1;

        }else if (strcmp(shoot,"e5")==0){
            e5=1;

        }else if (strcmp(shoot,"e6")==0){
            e6=1;

        }else if (strcmp(shoot,"e7")==0){
            e7=1;

        }else if (strcmp(shoot,"e8")==0){
            e8=1;

        }else if (strcmp(shoot,"e9")==0){
            e9=1;

        }else if (strcmp(shoot,"e10")==0){
            e10=1;

        }else if (strcmp(shoot,"e11")==0){
            e11=1;

        }else if (strcmp(shoot,"e12")==0){
            e12=1;

        }else if (strcmp(shoot,"e13")==0){
            e13=1;

        }else if (strcmp(shoot,"e14")==0){
            e14=1;

        }else if (strcmp(shoot,"e15")==0){
            e15=1;

        }else if (strcmp(shoot,"e16")==0){
            e16=1;

        }else if (strcmp(shoot,"f1")==0){
            f1=1;

        }else if (strcmp(shoot,"f2")==0){
            f2=1;

        }else if (strcmp(shoot,"f3")==0){
            f3=1;

        }else if (strcmp(shoot,"f4")==0){
            f4=1;

        }else if (strcmp(shoot,"f5")==0){
            f5=1;

        }else if (strcmp(shoot,"f6")==0){
            f6=1;

        }else if (strcmp(shoot,"f7")==0){
            f7=1;

        }else if (strcmp(shoot,"f8")==0){
            f8=1;

        }else if (strcmp(shoot,"f9")==0){
            f9=1;

        }else if (strcmp(shoot,"f10")==0){
            f10=1;

        }else if (strcmp(shoot,"f11")==0){
            f11=1;

        }else if (strcmp(shoot,"f12")==0){
            f12=1;

        }else if (strcmp(shoot,"f13")==0){
            f13=1;

        }else if (strcmp(shoot,"f14")==0){
            f14=1;

        }else if (strcmp(shoot,"f15")==0){
            f15=1;

        }else if (strcmp(shoot,"f16")==0){
            f16=1;

        }else if (strcmp(shoot,"g1")==0){
            g1=1;

        }else if (strcmp(shoot,"g2")==0){
            g2=1;

        }else if (strcmp(shoot,"g3")==0){
            g3=1;

        }else if (strcmp(shoot,"g4")==0){
            g4=1;

        }else if (strcmp(shoot,"g5")==0){
            g5=1;

        }else if (strcmp(shoot,"g6")==0){
            g6=1;

        }else if (strcmp(shoot,"g7")==0){
            g7=1;

        }else if (strcmp(shoot,"g8")==0){
            g8=1;

        }else if (strcmp(shoot,"g9")==0){
            g9=1;

        }else if (strcmp(shoot,"g10")==0){
            g10=1;

        }else if (strcmp(shoot,"g11")==0){
            g11=1;

        }else if (strcmp(shoot,"g12")==0){
            g12=1;

        }else if (strcmp(shoot,"g13")==0){
            g13=1;

        }else if (strcmp(shoot,"g14")==0){
            g14=1;

        }else if (strcmp(shoot,"g15")==0){
            g15=1;

        }else if (strcmp(shoot,"g16")==0){
            g16=1;

        }else if (strcmp(shoot,"h1")==0){
            h1=1;

        }else if (strcmp(shoot,"h2")==0){
            h2=1;

        }else if (strcmp(shoot,"h3")==0){
            h3=1;

        }else if (strcmp(shoot,"h4")==0){
            h4=1;

        }else if (strcmp(shoot,"h5")==0){
            h5=1;

        }else if (strcmp(shoot,"h6")==0){
            h6=1;

        }else if (strcmp(shoot,"h7")==0){
            h7=1;

        }else if (strcmp(shoot,"h8")==0){
            h8=1;

        }else if (strcmp(shoot,"h9")==0){
            h9=1;

        }else if (strcmp(shoot,"h10")==0){
            h10=1;

        }else if (strcmp(shoot,"h11")==0){
            h11=1;

        }else if (strcmp(shoot,"h12")==0){
            h12=1;

        }else if (strcmp(shoot,"h13")==0){
            h13=1;

        }else if (strcmp(shoot,"h14")==0){
            h14=1;

        }else if (strcmp(shoot,"h15")==0){
            h15=1;

        }else if (strcmp(shoot,"h16")==0){
            h16=1;

        }else{}
    }else if(strcmp(shoot,barco22)==0){
        naves2 -= 1;
        cout << "\n   Objetivo alcanzado, buen disparo!\n    Turno del siguiente jugador"<<endl;
        _getch();
        system("cls");
        if (strcmp(shoot,"a1")==0){
            a1=1;

        }else if (strcmp(shoot,"a1")==0){
            a1=1;

        }else if (strcmp(shoot,"a2")==0){
            a2=1;

        }else if (strcmp(shoot,"a3")==0){
            a3=1;

        }else if (strcmp(shoot,"a4")==0){
            a4=1;

        }else if (strcmp(shoot,"a5")==0){
            a5=1;

        }else if (strcmp(shoot,"a6")==0){
            a6=1;

        }else if (strcmp(shoot,"a7")==0){
            a7=1;

        }else if (strcmp(shoot,"a8")==0){
            a8=1;

        }else if (strcmp(shoot,"a9")==0){
            a9=1;

        }else if (strcmp(shoot,"a10")==0){
            a10=1;

        }else if (strcmp(shoot,"a11")==0){
            a11=1;

        }else if (strcmp(shoot,"a12")==0){
            a12=1;

        }else if (strcmp(shoot,"a13")==0){
            a13=1;

        }else if (strcmp(shoot,"a14")==0){
            a14=1;

        }else if (strcmp(shoot,"a15")==0){
            a15=1;

        }else if (strcmp(shoot,"a16")==0){
            a16=1;

        }else if (strcmp(shoot,"b1")==0){
            b1=1;

        }else if (strcmp(shoot,"b2")==0){
            b2=1;

        }else if (strcmp(shoot,"b3")==0){
            b3=1;

        }else if (strcmp(shoot,"b4")==0){
            b4=1;

        }else if (strcmp(shoot,"b5")==0){
            b5=1;

        }else if (strcmp(shoot,"b6")==0){
            b6=1;

        }else if (strcmp(shoot,"b7")==0){
            b7=1;

        }else if (strcmp(shoot,"b8")==0){
            b8=1;

        }else if (strcmp(shoot,"b9")==0){
            b9=1;

        }else if (strcmp(shoot,"b10")==0){
            b10=1;

        }else if (strcmp(shoot,"b11")==0){
            b11=1;

        }else if (strcmp(shoot,"b12")==0){
            b12=1;

        }else if (strcmp(shoot,"b13")==0){
            b13=1;

        }else if (strcmp(shoot,"b14")==0){
            b14=1;

        }else if (strcmp(shoot,"b15")==0){
            b15=1;

        }else if (strcmp(shoot,"b16")==0){
            b16=1;

        }else if (strcmp(shoot,"c1")==0){
            c1=1;

        }else if (strcmp(shoot,"c2")==0){
            c2=1;

        }else if (strcmp(shoot,"b3")==0){
            b3=1;

        }else if (strcmp(shoot,"c4")==0){
            c4=1;

        }else if (strcmp(shoot,"c5")==0){
            c5=1;

        }else if (strcmp(shoot,"c6")==0){
            c6=1;

        }else if (strcmp(shoot,"c7")==0){
            c7=1;

        }else if (strcmp(shoot,"c8")==0){
            c8=1;

        }else if (strcmp(shoot,"c9")==0){
            c9=1;

        }else if (strcmp(shoot,"c10")==0){
            c10=1;

        }else if (strcmp(shoot,"c11")==0){
            c11=1;

        }else if (strcmp(shoot,"c12")==0){
            c12=1;

        }else if (strcmp(shoot,"c13")==0){
            c13=1;

        }else if (strcmp(shoot,"c14")==0){
            c14=1;

        }else if (strcmp(shoot,"c15")==0){
            c15=1;

        }else if (strcmp(shoot,"c16")==0){
            c16=1;

        }else if (strcmp(shoot,"d1")==0){
            d1=1;

        }else if (strcmp(shoot,"d2")==0){
            d2=1;

        }else if (strcmp(shoot,"d3")==0){
            d3=1;

        }else if (strcmp(shoot,"d4")==0){
            d4=1;

        }else if (strcmp(shoot,"d5")==0){
            d5=1;

        }else if (strcmp(shoot,"d6")==0){
            d6=1;

        }else if (strcmp(shoot,"d7")==0){
            d7=1;

        }else if (strcmp(shoot,"d8")==0){
            d8=1;

        }else if (strcmp(shoot,"d9")==0){
            d9=1;

        }else if (strcmp(shoot,"d10")==0){
            d10=1;

        }else if (strcmp(shoot,"d11")==0){
            d11=1;

        }else if (strcmp(shoot,"d12")==0){
            d12=1;

        }else if (strcmp(shoot,"d13")==0){
            d13=1;

        }else if (strcmp(shoot,"d14")==0){
            d14=1;

        }else if (strcmp(shoot,"d15")==0){
            d15=1;

        }else if (strcmp(shoot,"d16")==0){
            d16=1;

        }else if (strcmp(shoot,"e1")==0){
            e1=1;

        }else if (strcmp(shoot,"e2")==0){
            e2=1;

        }else if (strcmp(shoot,"e3")==0){
            e3=1;

        }else if (strcmp(shoot,"e4")==0){
            e4=1;

        }else if (strcmp(shoot,"e5")==0){
            e5=1;

        }else if (strcmp(shoot,"e6")==0){
            e6=1;

        }else if (strcmp(shoot,"e7")==0){
            e7=1;

        }else if (strcmp(shoot,"e8")==0){
            e8=1;

        }else if (strcmp(shoot,"e9")==0){
            e9=1;

        }else if (strcmp(shoot,"e10")==0){
            e10=1;

        }else if (strcmp(shoot,"e11")==0){
            e11=1;

        }else if (strcmp(shoot,"e12")==0){
            e12=1;

        }else if (strcmp(shoot,"e13")==0){
            e13=1;

        }else if (strcmp(shoot,"e14")==0){
            e14=1;

        }else if (strcmp(shoot,"e15")==0){
            e15=1;

        }else if (strcmp(shoot,"e16")==0){
            e16=1;

        }else if (strcmp(shoot,"f1")==0){
            f1=1;

        }else if (strcmp(shoot,"f2")==0){
            f2=1;

        }else if (strcmp(shoot,"f3")==0){
            f3=1;

        }else if (strcmp(shoot,"f4")==0){
            f4=1;

        }else if (strcmp(shoot,"f5")==0){
            f5=1;

        }else if (strcmp(shoot,"f6")==0){
            f6=1;

        }else if (strcmp(shoot,"f7")==0){
            f7=1;

        }else if (strcmp(shoot,"f8")==0){
            f8=1;

        }else if (strcmp(shoot,"f9")==0){
            f9=1;

        }else if (strcmp(shoot,"f10")==0){
            f10=1;

        }else if (strcmp(shoot,"f11")==0){
            f11=1;

        }else if (strcmp(shoot,"f12")==0){
            f12=1;

        }else if (strcmp(shoot,"f13")==0){
            f13=1;

        }else if (strcmp(shoot,"f14")==0){
            f14=1;

        }else if (strcmp(shoot,"f15")==0){
            f15=1;

        }else if (strcmp(shoot,"f16")==0){
            f16=1;

        }else if (strcmp(shoot,"g1")==0){
            g1=1;

        }else if (strcmp(shoot,"g2")==0){
            g2=1;

        }else if (strcmp(shoot,"g3")==0){
            g3=1;

        }else if (strcmp(shoot,"g4")==0){
            g4=1;

        }else if (strcmp(shoot,"g5")==0){
            g5=1;

        }else if (strcmp(shoot,"g6")==0){
            g6=1;

        }else if (strcmp(shoot,"g7")==0){
            g7=1;

        }else if (strcmp(shoot,"g8")==0){
            g8=1;

        }else if (strcmp(shoot,"g9")==0){
            g9=1;

        }else if (strcmp(shoot,"g10")==0){
            g10=1;

        }else if (strcmp(shoot,"g11")==0){
            g11=1;

        }else if (strcmp(shoot,"g12")==0){
            g12=1;

        }else if (strcmp(shoot,"g13")==0){
            g13=1;

        }else if (strcmp(shoot,"g14")==0){
            g14=1;

        }else if (strcmp(shoot,"g15")==0){
            g15=1;

        }else if (strcmp(shoot,"g16")==0){
            g16=1;

        }else if (strcmp(shoot,"h1")==0){
            h1=1;

        }else if (strcmp(shoot,"h2")==0){
            h2=1;

        }else if (strcmp(shoot,"h3")==0){
            h3=1;

        }else if (strcmp(shoot,"h4")==0){
            h4=1;

        }else if (strcmp(shoot,"h5")==0){
            h5=1;

        }else if (strcmp(shoot,"h6")==0){
            h6=1;

        }else if (strcmp(shoot,"h7")==0){
            h7=1;

        }else if (strcmp(shoot,"h8")==0){
            h8=1;

        }else if (strcmp(shoot,"h9")==0){
            h9=1;

        }else if (strcmp(shoot,"h10")==0){
            h10=1;

        }else if (strcmp(shoot,"h11")==0){
            h11=1;

        }else if (strcmp(shoot,"h12")==0){
            h12=1;

        }else if (strcmp(shoot,"h13")==0){
            h13=1;

        }else if (strcmp(shoot,"h14")==0){
            h14=1;

        }else if (strcmp(shoot,"h15")==0){
            h15=1;

        }else if (strcmp(shoot,"h16")==0){
            h16=1;

        }else{}
    }else if(strcmp(shoot,barco23)==0){
        naves2 -= 1;
        cout << "\n   Objetivo alcanzado, buen disparo!\n    Turno del siguiente jugador"<<endl;
        _getch();
        system("cls");
        if (strcmp(shoot,"a1")==0){
            a1=1;

        }else if (strcmp(shoot,"a1")==0){
            a1=1;

        }else if (strcmp(shoot,"a2")==0){
            a2=1;

        }else if (strcmp(shoot,"a3")==0){
            a3=1;

        }else if (strcmp(shoot,"a4")==0){
            a4=1;

        }else if (strcmp(shoot,"a5")==0){
            a5=1;

        }else if (strcmp(shoot,"a6")==0){
            a6=1;

        }else if (strcmp(shoot,"a7")==0){
            a7=1;

        }else if (strcmp(shoot,"a8")==0){
            a8=1;

        }else if (strcmp(shoot,"a9")==0){
            a9=1;

        }else if (strcmp(shoot,"a10")==0){
            a10=1;

        }else if (strcmp(shoot,"a11")==0){
            a11=1;

        }else if (strcmp(shoot,"a12")==0){
            a12=1;

        }else if (strcmp(shoot,"a13")==0){
            a13=1;

        }else if (strcmp(shoot,"a14")==0){
            a14=1;

        }else if (strcmp(shoot,"a15")==0){
            a15=1;

        }else if (strcmp(shoot,"a16")==0){
            a16=1;

        }else if (strcmp(shoot,"b1")==0){
            b1=1;

        }else if (strcmp(shoot,"b2")==0){
            b2=1;

        }else if (strcmp(shoot,"b3")==0){
            b3=1;

        }else if (strcmp(shoot,"b4")==0){
            b4=1;

        }else if (strcmp(shoot,"b5")==0){
            b5=1;

        }else if (strcmp(shoot,"b6")==0){
            b6=1;

        }else if (strcmp(shoot,"b7")==0){
            b7=1;

        }else if (strcmp(shoot,"b8")==0){
            b8=1;

        }else if (strcmp(shoot,"b9")==0){
            b9=1;

        }else if (strcmp(shoot,"b10")==0){
            b10=1;

        }else if (strcmp(shoot,"b11")==0){
            b11=1;

        }else if (strcmp(shoot,"b12")==0){
            b12=1;

        }else if (strcmp(shoot,"b13")==0){
            b13=1;

        }else if (strcmp(shoot,"b14")==0){
            b14=1;

        }else if (strcmp(shoot,"b15")==0){
            b15=1;

        }else if (strcmp(shoot,"b16")==0){
            b16=1;

        }else if (strcmp(shoot,"c1")==0){
            c1=1;

        }else if (strcmp(shoot,"c2")==0){
            c2=1;

        }else if (strcmp(shoot,"b3")==0){
            b3=1;

        }else if (strcmp(shoot,"c4")==0){
            c4=1;

        }else if (strcmp(shoot,"c5")==0){
            c5=1;

        }else if (strcmp(shoot,"c6")==0){
            c6=1;

        }else if (strcmp(shoot,"c7")==0){
            c7=1;

        }else if (strcmp(shoot,"c8")==0){
            c8=1;

        }else if (strcmp(shoot,"c9")==0){
            c9=1;

        }else if (strcmp(shoot,"c10")==0){
            c10=1;

        }else if (strcmp(shoot,"c11")==0){
            c11=1;

        }else if (strcmp(shoot,"c12")==0){
            c12=1;

        }else if (strcmp(shoot,"c13")==0){
            c13=1;

        }else if (strcmp(shoot,"c14")==0){
            c14=1;

        }else if (strcmp(shoot,"c15")==0){
            c15=1;

        }else if (strcmp(shoot,"c16")==0){
            c16=1;

        }else if (strcmp(shoot,"d1")==0){
            d1=1;

        }else if (strcmp(shoot,"d2")==0){
            d2=1;

        }else if (strcmp(shoot,"d3")==0){
            d3=1;

        }else if (strcmp(shoot,"d4")==0){
            d4=1;

        }else if (strcmp(shoot,"d5")==0){
            d5=1;

        }else if (strcmp(shoot,"d6")==0){
            d6=1;

        }else if (strcmp(shoot,"d7")==0){
            d7=1;

        }else if (strcmp(shoot,"d8")==0){
            d8=1;

        }else if (strcmp(shoot,"d9")==0){
            d9=1;

        }else if (strcmp(shoot,"d10")==0){
            d10=1;

        }else if (strcmp(shoot,"d11")==0){
            d11=1;

        }else if (strcmp(shoot,"d12")==0){
            d12=1;

        }else if (strcmp(shoot,"d13")==0){
            d13=1;

        }else if (strcmp(shoot,"d14")==0){
            d14=1;

        }else if (strcmp(shoot,"d15")==0){
            d15=1;

        }else if (strcmp(shoot,"d16")==0){
            d16=1;

        }else if (strcmp(shoot,"e1")==0){
            e1=1;

        }else if (strcmp(shoot,"e2")==0){
            e2=1;

        }else if (strcmp(shoot,"e3")==0){
            e3=1;

        }else if (strcmp(shoot,"e4")==0){
            e4=1;

        }else if (strcmp(shoot,"e5")==0){
            e5=1;

        }else if (strcmp(shoot,"e6")==0){
            e6=1;

        }else if (strcmp(shoot,"e7")==0){
            e7=1;

        }else if (strcmp(shoot,"e8")==0){
            e8=1;

        }else if (strcmp(shoot,"e9")==0){
            e9=1;

        }else if (strcmp(shoot,"e10")==0){
            e10=1;

        }else if (strcmp(shoot,"e11")==0){
            e11=1;

        }else if (strcmp(shoot,"e12")==0){
            e12=1;

        }else if (strcmp(shoot,"e13")==0){
            e13=1;

        }else if (strcmp(shoot,"e14")==0){
            e14=1;

        }else if (strcmp(shoot,"e15")==0){
            e15=1;

        }else if (strcmp(shoot,"e16")==0){
            e16=1;

        }else if (strcmp(shoot,"f1")==0){
            f1=1;

        }else if (strcmp(shoot,"f2")==0){
            f2=1;

        }else if (strcmp(shoot,"f3")==0){
            f3=1;

        }else if (strcmp(shoot,"f4")==0){
            f4=1;

        }else if (strcmp(shoot,"f5")==0){
            f5=1;

        }else if (strcmp(shoot,"f6")==0){
            f6=1;

        }else if (strcmp(shoot,"f7")==0){
            f7=1;

        }else if (strcmp(shoot,"f8")==0){
            f8=1;

        }else if (strcmp(shoot,"f9")==0){
            f9=1;

        }else if (strcmp(shoot,"f10")==0){
            f10=1;

        }else if (strcmp(shoot,"f11")==0){
            f11=1;

        }else if (strcmp(shoot,"f12")==0){
            f12=1;

        }else if (strcmp(shoot,"f13")==0){
            f13=1;

        }else if (strcmp(shoot,"f14")==0){
            f14=1;

        }else if (strcmp(shoot,"f15")==0){
            f15=1;

        }else if (strcmp(shoot,"f16")==0){
            f16=1;

        }else if (strcmp(shoot,"g1")==0){
            g1=1;

        }else if (strcmp(shoot,"g2")==0){
            g2=1;

        }else if (strcmp(shoot,"g3")==0){
            g3=1;

        }else if (strcmp(shoot,"g4")==0){
            g4=1;

        }else if (strcmp(shoot,"g5")==0){
            g5=1;

        }else if (strcmp(shoot,"g6")==0){
            g6=1;

        }else if (strcmp(shoot,"g7")==0){
            g7=1;

        }else if (strcmp(shoot,"g8")==0){
            g8=1;

        }else if (strcmp(shoot,"g9")==0){
            g9=1;

        }else if (strcmp(shoot,"g10")==0){
            g10=1;

        }else if (strcmp(shoot,"g11")==0){
            g11=1;

        }else if (strcmp(shoot,"g12")==0){
            g12=1;

        }else if (strcmp(shoot,"g13")==0){
            g13=1;

        }else if (strcmp(shoot,"g14")==0){
            g14=1;

        }else if (strcmp(shoot,"g15")==0){
            g15=1;

        }else if (strcmp(shoot,"g16")==0){
            g16=1;

        }else if (strcmp(shoot,"h1")==0){
            h1=1;

        }else if (strcmp(shoot,"h2")==0){
            h2=1;

        }else if (strcmp(shoot,"h3")==0){
            h3=1;

        }else if (strcmp(shoot,"h4")==0){
            h4=1;

        }else if (strcmp(shoot,"h5")==0){
            h5=1;

        }else if (strcmp(shoot,"h6")==0){
            h6=1;

        }else if (strcmp(shoot,"h7")==0){
            h7=1;

        }else if (strcmp(shoot,"h8")==0){
            h8=1;

        }else if (strcmp(shoot,"h9")==0){
            h9=1;

        }else if (strcmp(shoot,"h10")==0){
            h10=1;

        }else if (strcmp(shoot,"h11")==0){
            h11=1;

        }else if (strcmp(shoot,"h12")==0){
            h12=1;

        }else if (strcmp(shoot,"h13")==0){
            h13=1;

        }else if (strcmp(shoot,"h14")==0){
            h14=1;

        }else if (strcmp(shoot,"h15")==0){
            h15=1;

        }else if (strcmp(shoot,"h16")==0){
            h16=1;

        }else{}
    }else if(strcmp(shoot,barco24)==0){
        naves2 -= 1;
        cout << "\n   Objetivo alcanzado, buen disparo!\n    Turno del siguiente jugador"<<endl;
        _getch();
        system("cls");
        if (strcmp(shoot,"a1")==0){
            a1=1;

        }else if (strcmp(shoot,"a1")==0){
            a1=1;

        }else if (strcmp(shoot,"a2")==0){
            a2=1;

        }else if (strcmp(shoot,"a3")==0){
            a3=1;

        }else if (strcmp(shoot,"a4")==0){
            a4=1;

        }else if (strcmp(shoot,"a5")==0){
            a5=1;

        }else if (strcmp(shoot,"a6")==0){
            a6=1;

        }else if (strcmp(shoot,"a7")==0){
            a7=1;

        }else if (strcmp(shoot,"a8")==0){
            a8=1;

        }else if (strcmp(shoot,"a9")==0){
            a9=1;

        }else if (strcmp(shoot,"a10")==0){
            a10=1;

        }else if (strcmp(shoot,"a11")==0){
            a11=1;

        }else if (strcmp(shoot,"a12")==0){
            a12=1;

        }else if (strcmp(shoot,"a13")==0){
            a13=1;

        }else if (strcmp(shoot,"a14")==0){
            a14=1;

        }else if (strcmp(shoot,"a15")==0){
            a15=1;

        }else if (strcmp(shoot,"a16")==0){
            a16=1;

        }else if (strcmp(shoot,"b1")==0){
            b1=1;

        }else if (strcmp(shoot,"b2")==0){
            b2=1;

        }else if (strcmp(shoot,"b3")==0){
            b3=1;

        }else if (strcmp(shoot,"b4")==0){
            b4=1;

        }else if (strcmp(shoot,"b5")==0){
            b5=1;

        }else if (strcmp(shoot,"b6")==0){
            b6=1;

        }else if (strcmp(shoot,"b7")==0){
            b7=1;

        }else if (strcmp(shoot,"b8")==0){
            b8=1;

        }else if (strcmp(shoot,"b9")==0){
            b9=1;

        }else if (strcmp(shoot,"b10")==0){
            b10=1;

        }else if (strcmp(shoot,"b11")==0){
            b11=1;

        }else if (strcmp(shoot,"b12")==0){
            b12=1;

        }else if (strcmp(shoot,"b13")==0){
            b13=1;

        }else if (strcmp(shoot,"b14")==0){
            b14=1;

        }else if (strcmp(shoot,"b15")==0){
            b15=1;

        }else if (strcmp(shoot,"b16")==0){
            b16=1;

        }else if (strcmp(shoot,"c1")==0){
            c1=1;

        }else if (strcmp(shoot,"c2")==0){
            c2=1;

        }else if (strcmp(shoot,"b3")==0){
            b3=1;

        }else if (strcmp(shoot,"c4")==0){
            c4=1;

        }else if (strcmp(shoot,"c5")==0){
            c5=1;

        }else if (strcmp(shoot,"c6")==0){
            c6=1;

        }else if (strcmp(shoot,"c7")==0){
            c7=1;

        }else if (strcmp(shoot,"c8")==0){
            c8=1;

        }else if (strcmp(shoot,"c9")==0){
            c9=1;

        }else if (strcmp(shoot,"c10")==0){
            c10=1;

        }else if (strcmp(shoot,"c11")==0){
            c11=1;

        }else if (strcmp(shoot,"c12")==0){
            c12=1;

        }else if (strcmp(shoot,"c13")==0){
            c13=1;

        }else if (strcmp(shoot,"c14")==0){
            c14=1;

        }else if (strcmp(shoot,"c15")==0){
            c15=1;

        }else if (strcmp(shoot,"c16")==0){
            c16=1;

        }else if (strcmp(shoot,"d1")==0){
            d1=1;

        }else if (strcmp(shoot,"d2")==0){
            d2=1;

        }else if (strcmp(shoot,"d3")==0){
            d3=1;

        }else if (strcmp(shoot,"d4")==0){
            d4=1;

        }else if (strcmp(shoot,"d5")==0){
            d5=1;

        }else if (strcmp(shoot,"d6")==0){
            d6=1;

        }else if (strcmp(shoot,"d7")==0){
            d7=1;

        }else if (strcmp(shoot,"d8")==0){
            d8=1;

        }else if (strcmp(shoot,"d9")==0){
            d9=1;

        }else if (strcmp(shoot,"d10")==0){
            d10=1;

        }else if (strcmp(shoot,"d11")==0){
            d11=1;

        }else if (strcmp(shoot,"d12")==0){
            d12=1;

        }else if (strcmp(shoot,"d13")==0){
            d13=1;

        }else if (strcmp(shoot,"d14")==0){
            d14=1;

        }else if (strcmp(shoot,"d15")==0){
            d15=1;

        }else if (strcmp(shoot,"d16")==0){
            d16=1;

        }else if (strcmp(shoot,"e1")==0){
            e1=1;

        }else if (strcmp(shoot,"e2")==0){
            e2=1;

        }else if (strcmp(shoot,"e3")==0){
            e3=1;

        }else if (strcmp(shoot,"e4")==0){
            e4=1;

        }else if (strcmp(shoot,"e5")==0){
            e5=1;

        }else if (strcmp(shoot,"e6")==0){
            e6=1;

        }else if (strcmp(shoot,"e7")==0){
            e7=1;

        }else if (strcmp(shoot,"e8")==0){
            e8=1;

        }else if (strcmp(shoot,"e9")==0){
            e9=1;

        }else if (strcmp(shoot,"e10")==0){
            e10=1;

        }else if (strcmp(shoot,"e11")==0){
            e11=1;

        }else if (strcmp(shoot,"e12")==0){
            e12=1;

        }else if (strcmp(shoot,"e13")==0){
            e13=1;

        }else if (strcmp(shoot,"e14")==0){
            e14=1;

        }else if (strcmp(shoot,"e15")==0){
            e15=1;

        }else if (strcmp(shoot,"e16")==0){
            e16=1;

        }else if (strcmp(shoot,"f1")==0){
            f1=1;

        }else if (strcmp(shoot,"f2")==0){
            f2=1;

        }else if (strcmp(shoot,"f3")==0){
            f3=1;

        }else if (strcmp(shoot,"f4")==0){
            f4=1;

        }else if (strcmp(shoot,"f5")==0){
            f5=1;

        }else if (strcmp(shoot,"f6")==0){
            f6=1;

        }else if (strcmp(shoot,"f7")==0){
            f7=1;

        }else if (strcmp(shoot,"f8")==0){
            f8=1;

        }else if (strcmp(shoot,"f9")==0){
            f9=1;

        }else if (strcmp(shoot,"f10")==0){
            f10=1;

        }else if (strcmp(shoot,"f11")==0){
            f11=1;

        }else if (strcmp(shoot,"f12")==0){
            f12=1;

        }else if (strcmp(shoot,"f13")==0){
            f13=1;

        }else if (strcmp(shoot,"f14")==0){
            f14=1;

        }else if (strcmp(shoot,"f15")==0){
            f15=1;

        }else if (strcmp(shoot,"f16")==0){
            f16=1;

        }else if (strcmp(shoot,"g1")==0){
            g1=1;

        }else if (strcmp(shoot,"g2")==0){
            g2=1;

        }else if (strcmp(shoot,"g3")==0){
            g3=1;

        }else if (strcmp(shoot,"g4")==0){
            g4=1;

        }else if (strcmp(shoot,"g5")==0){
            g5=1;

        }else if (strcmp(shoot,"g6")==0){
            g6=1;

        }else if (strcmp(shoot,"g7")==0){
            g7=1;

        }else if (strcmp(shoot,"g8")==0){
            g8=1;

        }else if (strcmp(shoot,"g9")==0){
            g9=1;

        }else if (strcmp(shoot,"g10")==0){
            g10=1;

        }else if (strcmp(shoot,"g11")==0){
            g11=1;

        }else if (strcmp(shoot,"g12")==0){
            g12=1;

        }else if (strcmp(shoot,"g13")==0){
            g13=1;

        }else if (strcmp(shoot,"g14")==0){
            g14=1;

        }else if (strcmp(shoot,"g15")==0){
            g15=1;

        }else if (strcmp(shoot,"g16")==0){
            g16=1;

        }else if (strcmp(shoot,"h1")==0){
            h1=1;

        }else if (strcmp(shoot,"h2")==0){
            h2=1;

        }else if (strcmp(shoot,"h3")==0){
            h3=1;

        }else if (strcmp(shoot,"h4")==0){
            h4=1;

        }else if (strcmp(shoot,"h5")==0){
            h5=1;

        }else if (strcmp(shoot,"h6")==0){
            h6=1;

        }else if (strcmp(shoot,"h7")==0){
            h7=1;

        }else if (strcmp(shoot,"h8")==0){
            h8=1;

        }else if (strcmp(shoot,"h9")==0){
            h9=1;

        }else if (strcmp(shoot,"h10")==0){
            h10=1;

        }else if (strcmp(shoot,"h11")==0){
            h11=1;

        }else if (strcmp(shoot,"h12")==0){
            h12=1;

        }else if (strcmp(shoot,"h13")==0){
            h13=1;

        }else if (strcmp(shoot,"h14")==0){
            h14=1;

        }else if (strcmp(shoot,"h15")==0){
            h15=1;

        }else if (strcmp(shoot,"h16")==0){
            h16=1;

        }else{}
    }else{
        cout << "\n   Disparo fallido, mejor suerte  proxima!\n    Turno del siguiente jugador"<<endl;
        _getch();
        system("cls");

    }
    }
        cout << "\n\n  ################################################################################################################"<<endl;
        cout << "  #                                                                                                              #"<<endl;
        cout << "  # _|_|_|                _|                _|  _|                _|      _|                                  _| #"<<endl;
        cout << "  # _|    _|    _|_|_|  _|_|_|_|    _|_|_|  _|  _|    _|_|_|      _|_|    _|    _|_|_|  _|      _|    _|_|_|  _| #"<<endl;
        cout << "  # _|_|_|    _|    _|    _|      _|    _|  _|  _|  _|    _|      _|  _|  _|  _|    _|  _|      _|  _|    _|  _| #"<<endl;
        cout << "  # _|    _|  _|    _|    _|      _|    _|  _|  _|  _|    _|      _|    _|_|  _|    _|    _|  _|    _|    _|  _| #"<<endl;
        cout << "  # _|_|_|      _|_|_|      _|_|    _|_|_|  _|  _|    _|_|_|      _|      _|    _|_|_|      _|        _|_|_|  _| #"<<endl;
        cout << "  #                                                                                                              #"<<endl;
        cout << "  ################################################################################################################"<<endl;
        cout << "\n   Resultado Final: \n\n    - Jugador 1: " <<4-naves2<< "\n\n    - Jugador 2: "<<4-naves1<< endl;
        cout <<"\n                                        1  2  3  4  5  6  7  8    9  10 11 12 13 14 15 16\n";
    cout <<"                                        ________________________________________________"<<endl;
    cout <<"                                    A  |"<<a1<<"  "<<a2<<"  "<<a3<<"  "<<a4<<"  "<<a5<<"  "<<a6<<"  "<<a7<<"  "<<a8<<" || "<<a9<<"  "<<a10<<"  "<<a11<<"  "<<a12<<"  "<<a13<<"  "<<a14<<"  "<<a15<<"  "<<a16<<"|  A"<<endl;
    cout <<"                                       |                                                |"<<endl;
    cout <<"                                    B  |"<<b1<<"  "<<b2<<"  "<<b3<<"  "<<b4<<"  "<<b5<<"  "<<b6<<"  "<<b7<<"  "<<b8<<" || "<<b9<<"  "<<b10<<"  "<<b11<<"  "<<b12<<"  "<<b13<<"  "<<b14<<"  "<<b15<<"  "<<b16<<"|  B"<<endl;
    cout <<"                                       |                                                |"<<endl;
    cout <<"                                    C  |"<<c1<<"  "<<c2<<"  "<<c3<<"  "<<c4<<"  "<<c5<<"  "<<c6<<"  "<<c7<<"  "<<c8<<" || "<<c9<<"  "<<c10<<"  "<<c11<<"  "<<c12<<"  "<<c13<<"  "<<c14<<"  "<<c15<<"  "<<c16<<"|  C"<<endl;
    cout <<"                                       |                                                |"<<endl;
    cout <<"                                    D  |"<<d1<<"  "<<d2<<"  "<<d3<<"  "<<d4<<"  "<<d5<<"  "<<d6<<"  "<<d7<<"  "<<d8<<" || "<<d9<<"  "<<d10<<"  "<<d11<<"  "<<d12<<"  "<<d13<<"  "<<d14<<"  "<<d15<<"  "<<d16<<"|  D"<<endl;
    cout <<"                                       |                                                |"<<endl;
    cout <<"                                    E  |"<<e1<<"  "<<e2<<"  "<<e3<<"  "<<e4<<"  "<<e5<<"  "<<e6<<"  "<<e7<<"  "<<e8<<" || "<<e9<<"  "<<e10<<"  "<<e11<<"  "<<e12<<"  "<<e13<<"  "<<e14<<"  "<<e15<<"  "<<e16<<"|  E"<<endl;
    cout <<"                                       |                                                |"<<endl;
    cout <<"                                    F  |"<<f1<<"  "<<f2<<"  "<<f3<<"  "<<f4<<"  "<<f5<<"  "<<f6<<"  "<<f7<<"  "<<f8<<" || "<<f9<<"  "<<f10<<"  "<<f11<<"  "<<f12<<"  "<<f13<<"  "<<f14<<"  "<<f15<<"  "<<f16<<"|  F"<<endl;
    cout <<"                                       |                                                |"<<endl;
    cout <<"                                    G  |"<<g1<<"  "<<g2<<"  "<<g3<<"  "<<g4<<"  "<<g5<<"  "<<g6<<"  "<<g7<<"  "<<g8<<" || "<<g9<<"  "<<g10<<"  "<<g11<<"  "<<g12<<"  "<<g13<<"  "<<g14<<"  "<<g15<<"  "<<g16<<"|  G"<<endl;
    cout <<"                                       |                                                |"<<endl;
    cout <<"                                    H  |"<<h1<<"  "<<h2<<"  "<<h3<<"  "<<h4<<"  "<<h5<<"  "<<h6<<"  "<<h7<<"  "<<h8<<" || "<<h9<<"  "<<h10<<"  "<<h11<<"  "<<h12<<"  "<<h13<<"  "<<h14<<"  "<<h15<<"  "<<h16<<"|  H"<<endl;
    cout <<"                                        ************************************************"<<endl;
    cout <<"                                        1  2  3  4  5  6  7  8    9  10 11 12 13 14 15 16\n\n\n\n";
    cout <<"                            #######                                           #                             "<<endl;
    cout <<"                            #       # #    #    #####  ###### #               # #    # ######  ####   ####  "<<endl;
    cout <<"                            #       # ##   #    #    # #      #               # #    # #      #    # #    # "<<endl;
    cout <<"                            #####   # # #  #    #    # #####  #               # #    # #####  #      #    # "<<endl;
    cout <<"                            #       # #  # #    #    # #      #         #     # #    # #      #  ### #    # "<<endl;
    cout <<"                            #       # #   ##    #    # #      #         #     # #    # #      #    # #    # "<<endl;
    cout <<"                            #       # #    #    #####  ###### ######     #####   ####  ######  ####   ####  "<<endl;
    cout <<"\n\n                                      Gracias por Jugar a Batalla Naval V1.0 By Favian Ramirez \n                                                   Pulsa enter para concluir"<<endl;
    _getch();




return 0;
}
