/*

Average Age
The given code declares an array called ages, which stores the ages of all employees of a company.

The code also includes a for loop that outputs the array. 

Task
Modify the code to calculate and output the average age of the employees. You do not need to output the array.

*/




#include <iostream>
using namespace std;

int main() {
    
    int ages[] = {19, 24, 36, 45, 56, 52, 21, 27, 24, 34, 29, 60, 40, 42, 45, 47, 22, 30, 34, 20, 18, 26, 51, 43, 47, 39, 22, 34, 56, 52, 21, 27, 24, 37, 19, 24, 36, 45, 44, 49, 23, 25, 19, 40, 29, 60, 40, 42, 45, 47, 61, 30, 19, 43, 47, 39, 41, 46, 29, 24, 21, 25, 28};
    
    int size = 63;
    
    int *p = ages;
    
    int sum = 0 ;
    
    for(int i=0;i<size;i++) {
       sum = sum + *p;
       p++;
    }

    cout << sum/size ;

}
