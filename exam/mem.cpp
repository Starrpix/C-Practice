/* Write a program to show how dynamic objects are created and destroyed
using new and delete operators*/

// new operator
//syntax: pointer variable = new data type
// int *ptr = new int;


// delete operator
//syntax: delete pointer_variable
//delete ptr;

#include<iostream>

using namespace std;

int main(){
    int i;
    int *ptr = NULL;
    ptr = new int;
    *ptr = 10;
    cout<<"Value of integer pointer:"<<*ptr<<endl;
    int n = 10;
    int *p = new int[n];
    //Values stored dynamically
    for( i=0; i<n ; i++){
        p[i]= i+1;
    }
    cout<<"The values stored dynamically are:"<<endl;
    for(i=0; i<n ; i++){
        cout<<p[i]<<endl;
    }
    delete ptr;
    delete[] p;
    return 0;

}