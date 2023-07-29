//Write a C program to use pointer for both base and derived classes and call the member function. Use Virtual keyword.

#include<iostream>
using namespace std;


class base{
    public:
    virtual void display(){
        cout<<"This is base"<<endl;
    }

};

class derived:public base{
    public:
    void display(){
        cout<<"This is derived"<<endl;
    }
};


int main(){
    base obj1;
    derived obj2;

//calling base class
    base *ptr = &obj1;
    ptr->display();

//calling derived via base class

ptr = &obj2;
ptr->display();


}