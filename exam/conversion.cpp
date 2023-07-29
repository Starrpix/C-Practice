//Basic type to Class type

/*
#include<iostream>
using namespace std;


class time
{
    int h;
    int m;
    public:
    time() {}
    time(int t){
        h = t/60;
        m = t%60;
    }

    void display(){
        cout<<h<<":"<<m<<endl;
    }
};


int main(){
    time t1;
    int period = 160;
    time t1(period);
    t1.display();
    return 0;
}
*/

//Class type to Basic Type

/*
operator type_name(){
    //code here
}*/

/*
#include<iostream>
using namespace std;
class Time
{
    int h,m;
    public:
    Time(int a,int b){
        h=a;
        m=b;
    }
    //casting operator function
    operator int(){
        cout<<"\n Class type to Basic type Conversion"<<endl;
        return(h*60+m);
    }
};

int main(){
    int duration;
    Time t(3,12);
    duration = int(t);
    cout<<"\nTotal minutes are:"<<duration<<endl;
    return 0;
    
}
*/

/* Wap to show the mechanisim of explicit
type conversion by changing the double value
to integer 

#include<iostream>
using namespace std;

int main(){
    double arrow = 5.2;
    int a = int(arrow); // Explicit type casting
    cout<<"Result:"<<a;
    return 0;
}

*/

/*Conversion using cast operator

//Static Cast
// upcast pointer-to-base to pointer-to-derived
// downcast pointer-to-derived to pointer-to-base

#include<iostream>
using namespace std;
int main(){
    float f=21.2;
    int b = static_cast<int>(f);
    cout<<b;
    return 0;

}


//Const Cast

#include<iostream>
using namespace std;

int main(){
    const int constantv = 5;

    int &mutablev = const_cast<int&>(constantv);
    mutablev = 10;

    cout<<"Orginal constant value:"<<constantv<<endl;
    cout<<"Modified value:"<<mutablev<<endl;
    return 0;
}




//Dynamic Cast
#include<iostream>
using namespace std;

class Base{
    public:
    virtual ~Base(){}
};

class Derived:Public Base{
    public:
    void display(){
        cout<<"Derived Class"<<endl
    }
};

int main(){
    Base *bptr = new Derived();
    Derived *dptr = dynamic_cast<Derived*>(bptr);

    if(dptr){
        dptr->display();
    }
      else  {
        cout<<"Dynamic cast failed!"<<endl;
        }

        delete bptr;
        return 0;

}


//Reinterpret Cast

#include <iostream>
using namespace std;

int main(){
    int intValue = 65;

    char * charPtr = reinterpret_cast<char*>(&intValue);

    cout<<"Character Value:"<<*charPtr<<endl;
    return 0;
}

*/