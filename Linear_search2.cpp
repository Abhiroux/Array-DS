#include<iostream>
using namespace std;

struct Array
{
    int A[20];
    int length;
    int size;
};
void Display(struct Array arr) {
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
}
int lineraSearch(Array arr,int key){
    for(int i=0;i<arr.length;i++){
        if(arr.A[i]==key){
            return i;
        }
    }
    return -1;
}


int main(){
    Array arr={{1,2,4,6,8,12,0,10},8,20};
    int key=10;
    cout<<lineraSearch(arr,key);
    return 0;
}