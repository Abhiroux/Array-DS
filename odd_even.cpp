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
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" is even\n";
        }
        else if(arr[i]%2!=0){
            cout<<arr[i]<<" is odd\n";
        }
    }
    return 0;
}