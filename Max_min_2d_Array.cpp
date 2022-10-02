#include<iostream>
using namespace std;
#define MAX 100
int main(){
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    int max,min;
    for(int i=0;i<row;i++){
        max=arr[i][0];
        for(int j=0;j<col;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
        cout<<"\nMax in the "<<i<<"th row is "<<max;
    }
    for(int i=0;i<row;i++){
        min=arr[i][0];
        for(int j=0;j<col;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
        cout<<"\nMinimum element in the "<<i<<"th row is "<<min;
    }
    int temp=0;
    for(int i=0;i<row;i++){            
        for(int j=0;j<col-1;j++){
            for(int k=0;k<col-1;k++){
                if(arr[i][k]>arr[i][k+1]){
                    temp=arr[i][k];
                    arr[i][k]=arr[i][k+1];
                    arr[i][k+1]=temp;
                }
            }
        }
    }
    cout<<"\nArray Elements after sorting\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}