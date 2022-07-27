//File: CPersonMain.cpp
//Programmer: Maria Fernandez
//Date: 01/28/2022
//Class: Data Structures Using C++

#include <iostream>
#include "cperson.h"

using namespace std;

int main() {
    //Create an object (default)
    CPerson P1;
  
    //Invoke type constructor
    char name [] = "Elon Musk";
    CPerson P2(name, 47);
  
    //Copy constructor
    CPerson P3(P2);
  
    //Display the objects
    cout << "\n Here are the three people\n\n";
    cout << "P1: " << P1 << endl;
    cout << "P2: " << P2 << endl;
    cout << "P3: " << P3 << endl;
  
    //Enter name and age for P1
    cout << "Enter your name and age (Hit enter after entering name)";
    cin >> P1;
  
    //Display the objects again
    cout << "Here are the three people (revised):\n\n";
    cout << "P1: " << P1 << endl;
    cout << "P2: " << P2 << endl;
    cout << "P3: " << P3 << endl; 
  
    //Find who is older between P1 and P2
    if (P1 == P2)
    {
        cout << P1.GetName() << " and " << P2.GetName() << " are the same age of " << P1.GetAge() << " years old. \n\n";
    }
    else if (P1 > P2)
    {
        cout << P1.GetName() << " is the oldest at age " << P1.GetAge() << "years old. \n\n";
    }
    else 
    {
        cout << P2.GetName() << " is the oldest at age " << P2.GetAge() << "years old. \n\n";
    }
    
    return 0;
} // end of main
