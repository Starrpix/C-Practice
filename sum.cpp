/*
Sum
You need to create an app that calculates the sum of the numbers 1 to N, where N is taken from input.

For example, for the number 5, the output should be 15, because 1+2+3+4+5=15.

*/



#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cin >> n;
    for( int a=1 ; a<=n  ; a++ ){
    sum += a ;
    }
    cout << sum ;
}
