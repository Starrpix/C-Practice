/*
class_name(const class_name & object_name){
    //code
}
*/

#include<iostream>
using namespace std;
class Construct{
    int a,b;
    public:
    Construct(int aa, int bb){
        a=aa;
        b=bb;
    }

    Construct(const Construct &con){
        a=con.a;
        b=con.b;
    }

    void show(){
        cout<<a<<""<<b<<endl;
    }
};

int main(){
    Construct C(5,5);
    Construct C1=C;
    cout<<"Copy COnstructor:"<<endl;
    C1.show();
    return 0;
}