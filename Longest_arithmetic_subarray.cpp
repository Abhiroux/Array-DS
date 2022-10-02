/***
An arthematic array is an array that contains at least two integers and the difference between
consecutive integers are equal. for example, [9,10],[3,3,3] and [9,7,5,3] are arithimetic arrays,
while [1,3,3,7] , [2,1,2], and [1,2,4] are not arithmetic arrays.
***/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int pd=a[1]-a[0];      //difference of fisrt two elements
    int j=2;               //j=2 array index
    int current=2;         //current will store the length of current arithmetic subarray and initially it will be 2
    int mx=2;               //max will store the maximum arithmetic subarray length

    while(j<n){
        if(pd==a[j]-a[j-1]){
            current++;
        }
        else{
            pd=a[j]-a[j-1];
            current=2;
        }
        mx=max(mx,current);
        j++;
    }
    cout<<"Maximum arithmetic subarray length in given array is "<<mx<<endl;
    return 0;
}