//Arbin Chhatkuli : BCA 3rd Semester
//Write a program for Function,inline function with Syntax in C++.

#include<iostream>
using namespace std;

string name;
int age;

void getData(){
    cout<<"Enter details"<<endl;
    cin>>name>>age;
}

inline void showData(){
    cout<<"Displaying details"<<endl;
    cout<<"Name:"<<name<<endl<<"Age:"<<age<<endl;
}

int main(){  
getData();
showData();

return 0;

}