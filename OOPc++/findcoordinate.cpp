/*
Friend 
 

You are given a Point class, which defines a point on a 2D grid (x, y).

The program creates a Point in main based on user input and calls the shift() function, which should increment the coordinates by the given step.

However, the code is not working, as the coordinates are private. 

Modify the code to fix it.

*/


#include <iostream>
using namespace std;

class Point {
    public:
        Point(int a, int b): x(a), y(b) {};
        void print() {
            cout << x << ", " << y;
        }
        friend void shift(Point &p, int step);

    private:
        int x;
        int y;
    
    
};
void shift(Point &p, int step) {
    p.x += step;
    p.y += step;
}

int main() {
    int x, y;
    cin>>x>>y;
    Point p(x, y);

    int step;
    cin>>step;
    shift(p, step);
    
    p.print();
}
