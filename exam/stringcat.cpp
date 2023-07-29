/*
Create a class string and overload the operators + to concatenate two strings s3=s1+s2, where s1, s2, s3 are object of type String.
*/
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
        cout<<str;
    }

    String operator+(String x){ //Concatenating string
    String s;
    strcat(str,x.str);
    strcpy(s.str,str);
    return s;
    }
};

int main(){
    String str1,str2,str3;
    str1.getData();
    str2.getData();
    cout<<"\nFirst String"<<endl;
    str1.display();
    cout<<"\nSecond String"<<endl;
    str2.display();
    str3=str1+str2; // String is concatendated. Overloaded '+' operator
    cout<<"\nConcatenated String is:"<<endl;
    str3.display();
    return 0;
}




//String operator+(String x) Concatenating String
//returnType operator symbol (arguments)

 