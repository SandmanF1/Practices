#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream MyFile ("GameData.txt");

    if (MyFile.is_open())
    {
        MyFile<<"Hola Mundo, esto esta escrito desde mi programa en C++"<<endl;
    }

    MyFile.close();
    

    return 0;
}