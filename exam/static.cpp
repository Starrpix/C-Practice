// static data_type member_name;
/*
#include<iostream>
using namespace std;
class Demo{
    private:
    static int X;
    public:
    static void fun(){
        cout<<"Value of X"<<X<<endl;
    }
};

//Defining Static data member
// data_type class_name :: member_name =value;
int Demo:: X = 10;
int main(){
    Demo o;
    o.fun();
    return 0;
}
*/

//Static Member Functions

#include<iostream>
using namespace std;

class Note{
    static int num;
    public:
    static int func(){
        return num;
    }
};

int Note::num=5;
int main(){
    cout<<"The value of num is :"<<Note::func()<<endl;
    return 0;
}