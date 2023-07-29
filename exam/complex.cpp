/*Create a class complex with two data types
(real,image). Provide the method of adding and
multiplying two complex numbers passed as arguments
to those functions and returning the new complex
number
*/

#include<iostream>
using namespace std;

class Complex{
    public:
    int real,imag;
    void add(Complex c1, Complex c2){
        int x,y;
        x=c1.real+c2.real;
        y=c1.imag+c2.imag;
        cout<<"Addition:"<<endl;
        cout<<x<<"+"<<y<<"i"<<endl;
    }
    void multiply(Complex c1, Complex c2){
        int x,y;
        x = (c1.real * c2.real) - (c1.imag * c2.imag);
        y = (c1.real * c2.imag) + (c1.imag * c2.real);
        cout<<"Multiply:"<<endl;
        cout<<x<<"*"<<y<<"i"<<endl;
    }
};

int main(){
    Complex a,b,c,d;
    cout<<"\nEnter real and imaginary part of first complex number"<<endl;
    cin>>a.real>>a.imag;
    cout<<"\nEnter real and imaginary part of second complex number"<<endl;
    cin>>b.real>>b.imag;
    c.add(a,b);
    d.multiply(a,b);
    return 0;
}
