#include<iostream>
using namespace std;
#define MAX 1000
int main(){
    int n;
    int arr[MAX];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}