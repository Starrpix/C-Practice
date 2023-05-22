//Arbin Chhatkuli : BCA 3rd Semester
//Write a program for Array to find smallest and largest number.

#include<iostream>
using namespace std;

int main(){
int a[99],k,i,j,small,large;
cout<<"Enter the length of array:"<<endl;
cin>>k;
for(i=0; i<k ; i++){
    cout<<"Enter elements in the array:"<<endl;
    cin>>a[i];
}
large=small=a[0];

 for(i=0; i<k; i++){
    if(large<a[i]){
        large=a[i];
    }
    if(small>a[i]){
        small=a[i];
    }
    }
cout<<"Largest number is:"<<large<<endl;
cout<<"Smallest number is:"<<small<<endl;  
    return 0;
}