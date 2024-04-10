#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the coulmn of the matrix: ";
    cin>>n;
    int m;
    cout<<"Enter the row of the matrix: ";
    cin>>m;

    int p;
    cout<<"Enter the column of second matrix : ";
    cin>>p;
    int q;
    cout<<"Enter the row of second matrix : ";
    cin>>q;
    
    if(m==p){
        int arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        int arr2[p][q];
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>arr2[i][j];
            }
        }
        int res[n][q];
        for(int i=0;i<n;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<m;k++){
                    res[i][j]+=arr[i][k]*arr2[k][j];
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
};