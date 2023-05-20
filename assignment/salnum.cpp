//Arbin Chhatkuli : BCA 3rd Semester
//Write a program for Array to find smallest and largest number.

#include<iostream>
using namespace std;

int main(){
int a[99],k,i,j,small[99],large[99];
cout<<"Enter the length of array:"<<endl;
cin>>k;
for(i=0; i<k ; i++){
    cout<<"Enter elements in the array:"<<endl;
    cin>>a[i];
}

for(i=0; i<k ; i++){
for(j=1; j<k ; j++){
    if(a[i]>a[j]){
        a[j]=a[i];
        a[i]=a[j];
        small[i]=a[j];
        
    }
    else{


    }
}

}


    return 0;
}