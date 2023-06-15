#include<iostream>
using namespace std;


// lets use multiple and mutlilevel inheritance


class A{
    public:
    string name1;
    void getData1(){
        cout<<"Enter name"<<endl;
        cin>>name1;
    }
};

class B{
    public:
    string name2;
    void getData2(){
        cout<<"Enter name"<<endl;
        cin>>name2;
    }
};


class C: public A, public B{
    public:
    string name3;
    void getData3(){
        cout<<"Enter name"<<endl;
        cin>>name3;
    }
};

class D: public C{
    public:
    string name4;
    void getData4(){
        cout<<"Enter name"<<endl;
        cin>>name4;
    }

    void display(){
        cout<<"Names:"<<name1<<"\t"<<name2<<"\t"<<name3<<"\t"<<name4<<endl;
    }

};


int main(){
    D obj;
    obj.getData1();
    obj.getData2();
    obj.getData3();
    obj.getData4();
    obj.display();
    return 0;
}