//Write a program to explain Abstract class and function in simple way 


#include <iostream>
using namespace std;

// Abstract class
class A {
public:
    // Pure virtual function (abstract function)
    virtual void abstract() = 0;
};

// Concrete class derived from AbstractClass
class C : public A {
public:
    // Implementation of the abstract function
    void abstract() {
        cout<<"ConcreteClass: Implementing abstract function"<<endl;
    }
};

int main() {
    // AbstractClass abstractObj; // Error: Cannot instantiate abstract class

    C obj;
    obj.abstract();

    return 0;
}
