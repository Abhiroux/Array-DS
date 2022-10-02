#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Ente Size of Array ";
    cin>>n;
    int arr[n];
    cout<<"Enter Element in Array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=INT16_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Max element in Array is "<<max;
    return 0;
}