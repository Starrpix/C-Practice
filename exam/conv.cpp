/*Write a program with class which has hours and minutes as 
data members. Use conversion routone to convert data of class
to seconds*/

#include<iostream>
using namespace std;

class Time{
    private:
    int hours;
    int minutes;
    int seconds;

    public:
    Time(){
        hours=0;
        minutes=0;
        seconds=0;
    }
    Time(int h,int m,int s){
        hours=h;
        minutes=m;
        seconds=s;
    }
   Time operator+(Time t1){
    Time temp;
    temp.seconds = seconds+t1.seconds;
    temp.minutes = minutes+t1.minutes;
    temp.hours = hours+t1.hours;
    return temp;
   }

   void display(){
    cout<<"HH:MM:SS ="<<hours<<":"<<minutes<<":"<<seconds<<endl;
   }

};

int main(){
    Time t1(4,5,33),t2(3,23,12),t3;
    cout<<"Two times are:"<<endl;
    t1.display();
    t2.display();
    t3=t1+t2;
    cout<<"SUM is:"<<endl;
    t3.display();
    return 0;

}