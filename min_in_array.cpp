#include<iostream>
using namespace std;

int main(){
    int arr[5]={12,21,34,54,32};
    int min=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Max element in Array is "<<min;
    return 0;
}