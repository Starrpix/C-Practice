/*

Selection Operator 
You are creating a program to manage smartphones. The given code declares a
 Phone class, with its constructor and two methods: use() and getCharge().

A Phone object is declared in main. Complete the code to call the getCharge()
method using the correct selection operator.

*/


#include <iostream>
using namespace std;

class Phone
{
    public:
        int charge;
        Phone() {
            charge = 100;
        }
        void use() {
            charge -=10;
        }
        void getCharge() {
            cout << charge;
        }
};

int main() {
    Phone p;
    p.use();
    Phone *ptr = &p;
    ptr->getCharge();
    
    //call the getCharge() method on ptr
    
} 
