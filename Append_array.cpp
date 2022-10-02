#include<iostream>
using namespace std;

struct Array
{
    int A[30];
    int size;
    int length;
};
void Display(struct Array arr) {
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
}
void Append(struct Array *array, int x){
    if(array->length<array->size){
        array->A[array->length++]=x;
    }
}
void insert(struct Array *arr, int index, int element){
    if(index>=0 && index<=arr->length){
        for(int i=arr->length;i>=index;i--){
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=element;
        arr->length++;
    }
}
void deletion(struct Array *arr, int index){
    int x=arr->A[index];
    for(int i=index;i<arr->length-1;i++){
        arr->A[i]=arr->A[i+1];
    }
    arr->length--;
}


int main(){
    Array arr={{12,13,45,21,34},30,5};
    cout<<"Before Append\n";
    Display(arr);
    Append(&arr,20);
    cout<<"\nAfter Append\n";
    Display(arr);
    insert(&arr,1,11);
    cout<<"\nAfter insert\n";
    Display(arr);
    deletion(&arr,0); 
    cout<<"\nAfter deletion\n";
    Display(arr);
    return 0;
}