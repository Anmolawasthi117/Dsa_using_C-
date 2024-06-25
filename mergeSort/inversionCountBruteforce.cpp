#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {5,1,3,0,4,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int count = 0;
    for (int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j<n; j++){
            if(arr[i]>arr[j]) count++;
        }
    }
    cout<<count;
    
    
    return 0;
};