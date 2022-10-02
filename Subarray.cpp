/***
Subarray:- Continious part of an Array
if Array = {12,45,56,65,23,6};
Subarrays can be formed from Array are
subarray = {45,56,65} or {12,45,56,65} or {65,23,6} and so on...
Number of Subarrays of any array with n elements = n*(n+1)/2 or nC2 + n;
***/

//Q. Given an array a[] of size n, Output sum of each subarray of the given array.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Number of Elements"<<endl;
    cin>>n;
    cout<<"Enter Elements"<<endl;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int subarray_count= n*(n+1)/2;
    int count=0;
    cout<<subarray_count<<" Subarrays Can be formed from "<<n<<" elements array"<<endl; 
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
            count++;
            cout<<"sum of subarray"<<count<<" is "<<sum<<endl;
        }
    }

    return 0;
}