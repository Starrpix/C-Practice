#include<iostream>
using namespace std;

class Square{
    friend class Rectangle;
    int side;
    public:
    Square (int s){
        side = s;
    }
};

class Rectangle{
    int length;
    int breadth;
    public:
    int getArea(){
        return length*breadth;
    }

    void shape(Square a){
        length = a.side;
        breadth = a.side;
    }
};

int main(){
    Square s(5);
    Rectangle r;
    r.shape(s);
    cout<<r.getArea()<<endl;
    return 0;
}