#include<iostream>
using namespace std;
int main(){
    int lenght;
    cout<<"Enter Length"<<endl;
    cin>>lenght;
    cout<<"Enter Elements"<<endl;
    int arr[lenght];
    for(int i=0;i<lenght;i++){
        cin>>arr[i];
    }
    
    int index,element;
    cout<<"Enter Index and element for insertion"<<endl;
    cin>>index>>element;
    for(int i=lenght;i>=index;i--){
        arr[i]=arr[i-1];
    }
    arr[index-1]=element;
    lenght++;

    for(int i=0;i<lenght;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}