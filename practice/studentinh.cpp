#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string stname;
    int stid;
    string staddress;

void getdata(){
    cout<<"Enter student details"<<endl;
    cout<<"Enter student name:"<<endl;
    cin>>stname;
    cout<<"Enter student id:"<<endl;
    cin>>stid;
    cout<<"Enter student address:"<<endl;
    cin>>staddress;
}   

};

class Captain:public Student{
    public:
    string house;
    string color;


    void getdata(){
        cout<<"Enter house name"<<endl;
        cin>>house;
        cout<<"Enter color"<<endl;
        cin>>color;
    }

    void putdata(){
        cout<<"Displaying Data"<<endl;
        cout<<"Student id:"<<endl;
        cout<<"Student name:"<<stname<<endl;
        cout<<"Student address:"<<staddress<<endl;
        cout<<"House name:"<<house<<endl;
        cout<<"Color:"<<color<<endl;
    }
};

int main(){
    Student obj;
    Captain obj1;

    obj.getdata();
    obj1.getdata();
    obj1.putdata();
return 0;
}

