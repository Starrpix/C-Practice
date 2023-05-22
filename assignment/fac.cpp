//Arbin Chhatkuli : BCA 3rd Semester
//create a function in C++ programming language to print the factorial of a number

#include <iostream>
using namespace std;

int factorial(int num) {
    int fact = 1;

    for (int i = 1; i <= num; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;
    cout << "Factorial of " << number << " = " << factorial(number) << endl;

    return 0;
}