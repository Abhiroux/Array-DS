#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int i,j;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp;
    for(i=0,j=n-1;i<n/2;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    cout<<"After Reversing\n";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}