#include<iostream>
#include<string.h>
using namespace std;

class String{
    public:
    char str[20];
    void getData(){
        cout<<"Enter string"<<endl;
        cin>>str;
    }
    
    void display(){
        cout<<str<<endl;
    }
    
    String operator+(String obj){
        String temp;
        strcat(str,obj.str);
        strcpy(temp.str,str);
        return temp.str;
    }
};

int main(){
    String st1,st2,st3;
    st1.getData();
    st2.getData();
    cout<<"\n First string"<<endl;
    st1.display();
    cout<<"\n Second string"<<endl;
    st2.display();
    st3=st1+st2; // String is concatanated. Overloaded '+' operator
    cout<<"\n Concataned String:"<<endl;
    st3.display();
    return 0;
}