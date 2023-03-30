
/*
Alphabet
The given code declares an array that holds the letters of the English alphabet.

Task
Take a number as input and output the letter from the array that corresponds to that index.
*/

#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    char letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    cout << letters[a];
    
}
