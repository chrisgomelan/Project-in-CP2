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
  
    string mech = "You need to identify wether the syntax is right or wrong";

        gotoxy(50,10);{
          cout << "Hello! " << name;
        }
          gotoxy(48,12);{
          cout << "Tap the space button to continue! ";
        }
  getch();

    //Mechanics of the Game   
     system("cls");
    gotoxy(48,14);{
        
        for(int i = 0; mech[i] != '\0'; i++){
         cout << mech[i];
      if(mech[i] == ' '){
        Sleep(200);
      }
     
    }
     getch();
    }
}

char name[100];
int main(){
 system("cls");
  
  /*left side*/  for(int i = 9; i<12;i++){
                    gotoxy(57,i);{
                    cout << "*";
                     }
                    }
  /*right side*/  for(int i = 9; i<12;i++){
                    gotoxy(92,i);{
                    cout << "*";
                      }
                    }
   /*bottom side*/ for(int i = 57; i<93;i++){
                    gotoxy(i,12);{
                    cout << "*";
                      }
                    }
  /*top side*/     for(int i = 57; i<93;i++){
                    gotoxy(i,8);{
                    cout << "*";
                      }
                    }
 
  gotoxy(68,9);{
    system("Color F0");
    
    cout << "Welcome to";
   }
   gotoxy(62,10);{
    system("Color F0");
    
    cout << "Syntax Identification Game!";
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