/* Write a program having polygon as an abstract class with length and height as it's data members. 
Create derived class Rectangle and Triangle. Make Area () as pure virtual functions and redefine it in
derive classes to calculate respective area.*/

#include<iostream>
using namespace std;

class Polygon{
    public:
    int len;
    int hgt;
    virtual void area()=0; // Pure virtual function
};

class Rectangle:public Polygon{
    public:
    Rectangle(int l,int h){
        len = l;
        hgt = h;
    }

    void area(){
        cout<<"Area of Rectangle is:"<<len*hgt<<endl;
    }


};

class Triangle:public Polygon{
public:
Triangle(int l, int h){
    len = l;
    hgt = h;
}
 void area(){
    cout<<"Area of Triangle"<<(len*hgt)/2<<endl;
 }
};

int main(){
Polygon *x;
Rectangle obj(3,2);
Triangle obj1(4,6);
x = &obj;
x->area();
x = &obj1;
x->area();
return 0;
}