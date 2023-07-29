//Write a C++ program to allocate memory using new operato

#include<iostream>
using namespace std;
/**/
int main(){
    int *ptr= new int;// using new operator
    *ptr= 42; // allocating memory a value
    cout<<"The allocated new memory is:"<<*ptr<<endl;
    delete ptr;
    return 0;
}