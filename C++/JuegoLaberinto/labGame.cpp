//Version 1.0 del juego, sin POO
#include <iostream>
#include <conio.h>

using namespace std;

void drawMap(int *coorX, int *coorY);
//void player(int coorX, int coorY);

int main(){
    char movement='w';
    int PlayerPositionX=2, PlayerPositionY=2;
    
    while (1)
    {

        cout<< "Bienvenido a la edicion 1.0 de mi juego del laberinto, sin Programacion Orientada a Objetos"<<endl;
        drawMap(&PlayerPositionX,&PlayerPositionY);
        
        movement=getch();
        
        if (movement)
        {
            if (movement=='w')
            {
                PlayerPositionY--;
            }else if (movement=='s')
            {
                PlayerPositionY++;
            }else if (movement=='d')
            {
                PlayerPositionX++;
            }else if (movement=='a')
            {
                PlayerPositionX--;
            }
            
        }
        
        system("cls");
        
    }
    
    
    


    return 0;
}

void drawMap(int *coorX, int *coorY){

    char mapSize[10][20]={
        {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','\n'},
        {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|','\n'},
        {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|','\n'},
        {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|','\n'},
        {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|','\n'},
        {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|','\n'},
        {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|','\n'},
        {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|','\n'},
        {'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|','\n'},
        {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','\n'},
    };
    if (mapSize[*coorY][*coorX]!='_' && mapSize[*coorY][*coorX]!='|')
    {
        mapSize[*coorY][*coorX]=1;
    }else
    {
        *coorY=2;
        *coorX=2;
    }
    
    

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            cout<< mapSize [i][j];
        }
        
    }
}

/*void player(int coorX, int coorY){

}*/