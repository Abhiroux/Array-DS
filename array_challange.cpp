#include<iostream>
using namespace std;

int main(){
    int mx=INT16_MIN,n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        // if(mx<arr[i]){
        //     mx=arr[i];
        // }
        mx=max(mx,arr[i]);
        cout<<"Max till "<<i<<"th element "<<mx<<endl;
    }
    return 0;
}