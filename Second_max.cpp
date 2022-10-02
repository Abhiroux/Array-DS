#include<iostream>
using namespace std;

int main(){
    int arr[6]={1,24,5,6,7,29};
    int max=arr[0];
    for(int i=0;i<6;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int sec_max=arr[0];
    for(int i=0;i<6;i++){
        if(arr[i]>sec_max && arr[i]<max){
            sec_max=arr[i];
        }
    }
    cout<<"\nSecond max integer inside array is "<<sec_max;
    return 0;
}