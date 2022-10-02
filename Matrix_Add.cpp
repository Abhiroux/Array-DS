#include<iostream>
using namespace std;

int main(){
    int M1[3][3],M2[3][3];
    cout<<"Enter Elements in 3x3 matrix M1"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>M1[i][j];
        }
    }

    cout<<"\nEnter Elements in 3x3 matrix M2"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>M2[i][j];
        }
    }

    int sum[3][3],sub[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=M1[i][j]+M2[i][j];
            sub[i][j]=M1[i][j]-M2[i][j];
        }
    }
    cout<<"Sum of M1 and M2 is "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nDifference of M1 and M2 is "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<sub[i][j]<<" ";
        }
        cout<<endl;
    }

    

    return 0;
}