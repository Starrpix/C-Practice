/*
//Function Overloading

#include<iostream>
using namespace std;


class Add{
    public:
    int add(int n1,int n2){
        return n1+n2;
    }

    int add(int n1,int n2,int n3){
        return n1+n2;
    }
};

int main(){
    Add a;
    cout<<a.add(2,3)<<endl;
    cout<<a.add(3,4,5)<<endl;
    return 0;
}

*/

//Function Overriding

/*
#include<iostream>
using namespace std;

class Base{
    public:
    void disp(){
        cout<<"Parent Class Function"<<endl;
    }
};

class Derived:public Base{
    public:
    void disp(){
        cout<<"Child Class Function"<<endl;

    }
};

int main(){
    Derived obj;
    obj.disp();
    return 0;
}
*/

#include<iostream>
using namespace std;

class Base{
    public:
     void disp(){
        cout<<"Parent Class Function"<<endl;
    }
};

class Derived:public Base{
    public:
    void disp(){
        cout<<"Child Class Function"<<endl;

    }
};

int main(){
    Base obj;
    obj.disp();
    return 0;
}