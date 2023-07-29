//Unary Operators Overloading

/*
increment (++) , decrement (--)
unary minus (-) 
logical not (!)

!obj , ++obj, --obj, -obj, +obj
*/

#include<iostream>
using namespace std;

class A{
    int a,b;
    public:
    void accept(){
        cout<<"\n Enter Two Numbers:"<<endl;
        cin>>a;
        cout<<"";
        cin>>b;
    }
    
    void operator--()// Overload Unary Decrement
    {
        a--;
        b--;
    }

    void operator++()// Overload Unary Increment
    {
        a++;
        b++;
    }

    void operator+(){

    }

    void operator-(){
        a = -a;
        b = -b;
    }

    void display(){
        cout<<"\n A:"<<a;
        cout<<"\n B:"<<b;
    }
};

int main(){
    A obj;
    obj.accept();
    --obj;
    cout<<"\n After Decrementing"<<endl;
    obj.display();
    ++obj;
    ++obj;
    cout<<"\n After Incrementing"<<endl;
    obj.display();
    +obj;
    cout<<"\n After Unary Plus"<<endl;
    obj.display();
    -obj;
    cout<<"\n After Unary Minus"<<endl;
    obj.display();
    return 0;
}