#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int mult=1;
    for(int i=0;i<5;i++){
        mult*=arr[i];
    }
    cout<<"Multiplication of elements inside array "<<mult;
    return 0;
}