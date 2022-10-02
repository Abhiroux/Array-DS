#include<iostream>
using namespace std;
#define MAX 1000
int main(){
    int size,n;
    cin>>size;
    int arr[MAX];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter Number of rotations"<<endl;
    cin>>n;
    cout<<"before rotation"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    for(int j=0;j<n;j++){
        int temp=arr[0];
        for(int i=0;i<size;i++){
            arr[i]=arr[i+1];
        }
        arr[size-1]=temp;
    }
    cout<<"\nafter rotation"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}