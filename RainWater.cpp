// https://youtu.be/UZG3-vZlFM4


#include<iostream>
using namespace std;

void Rainwater(int a[]){
    int length = sizeof(a)/sizeof(a[0]);
    int left[length];
    int right[length];
    left[0]=a[0];
    for(int i=1;i<length-1;i++){
        if(left[i-1]<a[i]){
            left[i]=a[i];
        }
        else
        left[i]=left[i-1];
        
    }
    for(int i=0;i<length;i++){
        cout<<left[i]<<" ";
    }
}

int main(){
    int a[]={3,1,2,4,0,1,3,2};
    Rainwater(a);
    return 0;
}