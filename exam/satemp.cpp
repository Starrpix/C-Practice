/*Create a template class to find a sum of array of integers
and array of double numbers*/

#include <iostream>
using namespace std;

//Template Declaration
template<class T>
//Generic Template Class for search

class TSum{
    public:
    T x[10];
    T sum;


void readData(){
    int i=0;
    for(i=0; i<5 ; i++){
        cin>>x[i];
    }

}

T sumData(){
    int i;
    for(i=0;i<5;i++){
        sum=sum+x[i];
    }
   cout<<sum<<endl; 
   return sum;
}
};

int main(){
    TSum <int> intnum = TSum<int>();
    TSum <double> dnum = TSum<double>();

    cout<< "Integer Number insert and sum";
    intnum.readData();
    intnum.sumData();

    cout<< "Double Number insert and sum";
    dnum.readData();
    dnum.sumData();
    return 0;

}