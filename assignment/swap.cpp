//Arbin Chhatkuli : BCA 3rd Semester
//Write a program in C++ which swap the values of two variables not using third variable.

#include <iostream>  
using namespace std;  


int main()  
{  
int x=6, y=7;      
cout<<"Before swap x= "<<x<<" y= "<<y<<endl;      
x=x+y; //x=13  
y=x-y; //y=6    
x=x-y; //x=7    
cout<<"After swap x= "<<x<<" y= "<<y<<endl;      
return 0;  
}  
