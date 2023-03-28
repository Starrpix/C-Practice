/*
Coffee Machine
A coffee machine makes 4 types of coffee:

Espresso
Americano
Cappuccino
Latte

Task
Create a program that outputs the correct coffee type based on the user's choice.

The choice variable is taken from input and is a number that corresponds to the coffee type.

*/



#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Coffee Types:" << endl;
    cout << "1. Espresso" << endl;
    cout << "2. Americano" << endl;
    cout << "3. Cappuccino" << endl;
    cout << "4. Latte" << endl;

    cout << "Enter a choice:" << endl;
    
    cin >> choice;

    switch(choice){
        case 1:
        cout << "Espresso";
        break;
        case 2:
        cout << "Americano";
        break;
        case 3:
        cout << "Cappuccino";
        break;
        case 4:
        cout << "Latte";
        break;
        default:
        cout << "Invalid Code";
    }

    


}
