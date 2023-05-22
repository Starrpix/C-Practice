//Arbin Chhatkuli : BCA 3rd Semester
//Write a program to find area of rectangle with constructor

#include<iostream>
using namespace std;

class area{
float length,breadth;
public:
area(){
    cout<<"Enter length:";
    cin>>length;
    cout<<"Enter breadth:";
    cin>>breadth;
}
void display(){
    cout<<endl<<"Area of rectangle is :"<<length*breadth<<endl;
}
};

int main(){
    area m;
    m.display();
    return 0;
}