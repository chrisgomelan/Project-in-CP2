#include<iostream>
#include<conio.h>
#include<windows.h>
#include <stdio.h>
using namespace std;

void gotoxy(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);

}

void Mechanics(char name[100]){
   system("cls");

   gotoxy(60,10);{
    
    cout << "Hello " << name;
   }
    gotoxy(50,11);{
    cout << "To play it properly here are the Mechanics: ";
   }
}

char name[100];
int main(){
 system("cls");
  
  gotoxy(60,10);{
    system("Color F0");
  
    cout << "Welcome to Fix the Syntax Game";
   }
   gotoxy(58, 15);{
    cout << "Enter your name: ";
   }
  
   cin.get(name,100);
   cin.ignore();
   Mechanics(name);

  



 getch();
    return 0;
}