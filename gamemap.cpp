/*
Game Map
You are making a game.

The map of the game is defined as a two-dimensional array, which stores 0 and 1 values.

0 corresponds to the area of the map that is free, while 1 represents a player on the map.

Task
Take two integers as input, the first representing the row, the second - the column.

Then output the corresponding value from the map array.
*/


#include <iostream>
using namespace std;

int main() {
    int map[7][7] = {
        {0, 0, 1, 1, 0, 1, 0},
        {1, 0, 0, 1, 1, 0, 1},
        {0, 1, 0, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 0},
        {0, 1, 1, 0, 0, 1, 0},
        {0, 0, 1, 0, 0, 0, 1},
        {0, 1, 0, 0, 0, 0, 1}
    };
    int a,b ;
    cin >> a ;
    cin >> b ;
    cout << map[a][b];

}
