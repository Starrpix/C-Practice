//Arbin Chhatkuli : BCA 3rd Semester
//Write a program in C++ to display the pattern like a diamond.

#include <iostream>
using namespace std;

int main()
{
   int i,j,r=5;
   for(i=0;i<=r;i++){
     for(j=1;j<=r-i;j++)
     cout<<" ";
     for(j=1;j<=2*i-1;j++)
       cout<<"*";
     cout<<endl;
   }
   for(i=r-1;i>=1;i--) {
     for(j=1;j<=r-i;j++)
     cout<<" ";
     for(j=1;j<=2*i-1;j++)
       cout<<"*";
     cout<<endl;;
   }
   return 0;
}