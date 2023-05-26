#include<iostream>
#include<conio.h>
//#include<windows.h>
using namespace std;

    void login(void){
    cout << "Login";

    }

    void reg(void){
        cout << "Sign In";
    }



int main(){
    char confirm;
    system("cls");
       cout << "Do you have already an account? ";
       cin >> confirm;

    if(confirm == 'y' || confirm == 'Y'){
        login();
      } 
    else {
        reg();
      }


    getch();
 return 0;
}