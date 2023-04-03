/*
Destructors 

You are making a game. The given code declares a Player class 
with a points member.

You need to add the destructor to the Player class, which should 
print the remaining points when the program finishes execution.

*/


#include <iostream>
using namespace std;

class Player
{
  public:
    int points;
    Player(int x)
    {
        points = x;
        points %= 5;
    }
    ~Player(){
      cout << points;
    }
    
};


int main(){

  int points;
  cin >> points;
  Player obj(points);
}
