//Write a program to add private data of two different classes using friend functions

#include<iostream>
using namespace std;

class B; // Predeclearation is needed to run smoothly
class A{
    private:
    int num1=10;
    public:
   /* A(){
        num1=10;
    }
   */

    void show(){
        cout<<"\nValue of num1 :"<<num1<<endl;
    }

    friend void sum(A *num1, B *num2);
};

class B{
    private:
    int num2=20;
    public:
  /*
  B(){
    num2=20;
   }*/

    void show(){
        cout<<"\nValue of num2 :"<<num2<<endl;
    }
    
    friend void sum(A *num1, B *num2);
};

void sum( A *n1, B *n2){
    cout<<n1->num1+n2->num2<<endl;
}

int main(){
    A x;
    B y;
    x.show();
    y.show();
    cout<<"Sum of two private numbers of different class:"<<endl;
    sum(&x,&y);
    return 0;
}



