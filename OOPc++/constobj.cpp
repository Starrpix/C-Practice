/*
Const Objects 
You are making a Number class to handle different math operations. The class includes an integer member and a square() method.

You need to complete the square() method so that the given code executes successfully. 

The square() method should return the square of num.

*/


#include <iostream>
using namespace std;

class Number
{
    private:
        int num;
    public:
        Number(int n) {
            num = n;
        }
        //complete the method
        int square() const {
           return num*num;
        };
};

int main() {
    int x;
    cin >> x;
    const Number myNum(x);
    cout << myNum.square();
}
