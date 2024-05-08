#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {1,4,7,8,2,5};
    int n = 6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // bubble sort
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
};