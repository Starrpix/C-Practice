/*
Example of a class 
Complete the given program. Define a class Bird which has one public method called makeSound(). That prints "chirp-chirp" when called.

Expected Output

chirp-chirp
*/

#include <iostream>
using namespace std;


class Bird {
    //complete the class, add makeSound() method
    public:
    void makeSound(){
        cout << "chirp-chirp" << endl;
    }
    
};


int main() {
    
    //instantiation
    Bird bird;
    
    //function call
    bird.makeSound();
    
    return 0;
}
