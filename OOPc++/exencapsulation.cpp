/*

Example of Encapsulation 
You are a supercar engineer and currently setting the engine's horsepower.

Complete the given program by completing methods to set and get the horsepower of the car object in order to output it.

The program should warn "Too much" if the inputted horsepower is above 800.

Sample Input

950

Sample Output

Too much

950

*/


#include <iostream>
using namespace std;

//class definition
class Car{
    
    //private area
    private:
        int horsepowers;

    //public area
    public:
        //complete the setter function
        void setHorsepowers(int x) {
            horsepowers = x;
            if(horsepowers>800){
                cout << "Too much" << endl;
            }
            
        }
    
        //complete the getter function
        int getHorsepowers() {
            return horsepowers;
        }
        

};


int main() {
    //getting input
    int horsepowers;
    cin >> horsepowers;
    //creating the object of class Car
    Car car;
    //setting the value for private member
    car.setHorsepowers(horsepowers);
    //printing the value of private member
    cout << car.getHorsepowers();

    return 0;
}
