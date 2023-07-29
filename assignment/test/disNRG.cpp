/*Write a C++ program to display Names, Roll No , and grades of 3 students who have appeared in the examination .
 Declare the class name , Roll no and grade. Create an array of class objects. Read and display the contents of the array */


#include<iostream>
#include<string>
using namespace std;

class Results {
public:
    string Name;
    int RollNo;
    string Grade;

    void getData() {
        cout << "Enter Name: ";
        cin >> Name;
        cout << "Enter Roll No: ";
        cin >> RollNo;
        cout << "Enter Grade: ";
        cin >> Grade;
    }

    void display() {
        cout << "Results:" << endl;
        cout << "Name: " << Name << endl;
        cout << "Roll No: " << RollNo << endl;
        cout << "Grade: " << Grade << endl;
    }
};

int main() {
    Results obj[3];
    int i;

    for (i = 0; i < 3; i++) {
        cout << "Enter details for student " << i+1 << ":" << endl;
        obj[i].getData();
    }

    for (i = 0; i < 3; i++) {
        cout << "Details for student " << i+1 << ":" << endl;
        obj[i].display();
        cout << endl;
    }

    return 0;
}
