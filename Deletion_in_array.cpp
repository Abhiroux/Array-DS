#include<iostream>
using namespace std;



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index;
    cout<<"Which index element you want to delete"<<endl;
    cin>>index;
    for(int i=index-1;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
    cout<<"After Deletion"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}