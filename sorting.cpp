#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

int partition(int arr[],int start,int end){
    int pivot = arr[start];
    int i=start+1;
    int j=end;
    while (j>=i)
    {
        while(arr[i]<=pivot)i++;
        while(arr[j]>pivot)j--;
        if(i<j){
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[start],&arr[j]);
    return (j+1);
}


void QuickSort(int arr[],int start,int end){
    if(start<end){
        int pi=partition(arr,start,end);
        QuickSort(arr,start,pi-1);
        QuickSort(arr,pi+1,end);
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
    cout<<"After Sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}