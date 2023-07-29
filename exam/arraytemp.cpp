/* Write a program to input 10 numbers into an array 
and sort them by using template function
*/

#include<iostream>
using namespace std;

template<typename T>
void sort(T arr[],int SIZE){
    for(int i=0; i<SIZE ; i++){
        for(int j= i+1; j<SIZE ; j++)
        {
            if(arr[i]>arr[j])
            {
                T temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }
        }
    }
}

int main(){
    int int_array[100],N;
    cout<<"How many number?"<<endl;
    cin>>N;
    for(int i=0 ; i<N ; i++){
        cin>>int_array[i];
    }

    sort(int_array,N);
    cout<<"After sorting:"<<endl;
    for(int i=0; i<N ; i++){
        cout<<int_array[i]<<","<<endl;
    }
    return 0;
}