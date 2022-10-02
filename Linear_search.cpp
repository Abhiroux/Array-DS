#include<iostream>
using namespace std;
int linearSearch(int arr[],int length,int key){
    for(int i=0;i<length;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[10]={12,34,56,78,90,98,87,76,65,2};
    cout<<linearSearch(arr,10,12);
    return 0;
}