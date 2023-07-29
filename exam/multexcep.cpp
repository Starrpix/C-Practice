#include<iostream>
using namespace std;

void num(int k){
    try{
        if(k==0){
            throw k;
        }
        else if(k>0){
            throw 'P';
        }
        else if(k<0){
            throw 1.0;
        }
        cout<<"End of try block"<<endl;
    }

    catch(char g){
        cout<<"Caught a postv value"<<endl;
    }

    catch(int j){
        cout<<"int"<<endl;
    }

    catch( double f){
        cout<<"double"<<endl;
    }
    cout<<"End of try "<<endl;
}

int main(){
    cout<<"Demo"<<endl;
    num(0);
    num(5);
    num(-1);
    return 0;
}