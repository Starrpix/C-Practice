#include<iostream>
using namespace std;

class Student{
    public:
    int age;
    string color,country;
    Student(){}
    //Paramaterized Constructor
    Student(int a,string b,string c ){
        age=a;
        color=b;
        country=c;

        cout<<age<<endl;
        cout<<color<<endl;
        cout<<country<<endl;
    }

    
};



int main(){
Student s1(2,"Red","America");
return 0;
}