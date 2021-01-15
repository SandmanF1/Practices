#include <iostream>
#include <fstream>

using namespace std;

int main (){

    ifstream MyFileRead("GameData.txt");
    string line;

    if (MyFileRead.is_open())
    {
        while(getline(MyFileRead, line)){
            cout<<line<<endl;
        }
    }else
    {
        cout<<"No pude hacerlo, senior"<<endl;
    }
    
    

    return 0;
}