#include<iostream>

using namespace std;

int partition(int arr[],int start,int end){
    int mid=(start+end)/2;
    int pivot=arr[mid];
    int i = start-1;
    for(int j=start;j<=end;j++){
        if(arr[j]<pivot){
            i++;
            int t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        }
    }
    int t=arr[i+1];
    arr[i+1]=arr[end];
    arr[end]=t;
    return (i+1);
}

void QuickSort(int arr[],int start,int end){
    if(start<end){
        int p=partition(arr,start,end);
        QuickSort(arr,start,p-1);
        QuickSort(arr,p+1,end);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    QuickSort(arr,0,n-1);
    cout<<"After Sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}