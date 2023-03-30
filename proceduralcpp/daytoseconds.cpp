/*

Days To Seconds
You are making an app to calculate how many seconds there are in a given number of days.

The given code takes the number of days as input, passes it to the toSeconds() function as the parameter, assigns the result to a variable, and outputs it.


Task
Create the toSeconds() function, which takes the days as its parameter, calculates and returns the number of seconds.

*/ 


#include <iostream>
using namespace std;

int toSeconds(int days){
    int sec;
    sec = days*24*60*60;
    return sec;
}

int main() {
    int days;
    cin >> days;

    int seconds = toSeconds(days);
    cout << seconds;
}
