#include<iostream>
#include<conio.h>
#include<windows.h>
#include <stdio.h>
#include<dos.h>
using namespace std; 
              

//gotoxy function                  
void gotoxy(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);

}

//Mechanics Function with an argument name from the user input
void Mechanics(char name[100]){
    
    //Mechanics of the Game store in variables  
     string mech = "- Choose your difficulty level (Easy, Medium, Hard) and identify whether the provided syntax is correct or incorrect. ";
     string mech1 = "- If incorrect, input the right syntax within 3 attempts. Earn points for each correct identification or input the right syntax.";
   

    //new screen or clearscreen for mechanics
    system("cls"); 
    
   
   //Header of Mechanics 
    gotoxy(70,5);{
      cout << "==================";
    }
    gotoxy(70,6);{
      cout << "  Game Mechanics";
    }
    gotoxy(70,7);{
      cout << "==================";
    }


   //First Mechanic w/ type writing logic
    gotoxy(19,9);{
        
        for(int i = 0; mech[i] != '\0'; i++){
           cout << mech[i];
         if(mech[i] == ' '){
           Sleep(200);
          } 
       }
     
    }
  
  //Second Mechanic w/ type writing logic
   gotoxy(19,11);{
        
        for(int a = 0; mech1[a] != '\0'; a++){
           cout << mech1[a];
         if(mech1[a] == ' '){
           Sleep(200);
          } 
       }
    }

   //Good Luck and the name of user
    gotoxy(65,14);{
      cout << "Goodluck " << name << "! <3<3";
    }

    //Tapping any button to continue
     while (true) {
    gotoxy(62,17);{    
      cout << "Tap any button to proceed in game....";
    }
     }
     getch();
}

char name[100]; //variable for name of the user

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
 

//This section is for Welcoming and Prompting user to input his/her name

  gotoxy(68,9);{
   
    system("Color F0"); //Color: F means Bright White background and 0 means black text; this is from windows.h library

    cout << "Welcome to";
   }
   gotoxy(62,10);{
    cout << "Syntax Identification Game!";
   }
   gotoxy(58, 15);{
    cout << "Enter your name: ";
   }

  //input name of user
  cin.get(name,100); 
  cin.ignore(); //The cin. ignore() function is used which is used to ignore or clear one or more characters from the input buffer.

  //Mechanics function call
  Mechanics(name); 
    
  
  



 getch();
    return 0;
}