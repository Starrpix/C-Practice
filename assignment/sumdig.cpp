//Arbin Chhatkuli : BCA 3rd Semester
//Write a program in C++ to find out the sum of digits of a number

#include<iostream>
using namespace std;

int main(){
    int num,sum=0,a;
    cout<<"Enter a number:"<<endl;
    cin>>num; //243
    while(num>0){
    a=num%10; // a = 243%10 = 3  / a = 24%10=4 / a = 2%10 = 2 
    sum=sum+a; // sum = 0+3 = 3 / sum = 3+4 = 7 / sum = 7+2 = 9
    num=num/10; // 243/10 = 24 / 24/10 = 2 / 2/10 = 0
    }
    cout<<"Sum is:"<<sum<<endl;
return 0;
}