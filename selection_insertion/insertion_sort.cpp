#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {4,5,6,3,2};
    int n = sizeof(arr)/sizeof(int);
    for(int ele :arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    // for insertion sort
    for(int i=1;i<n;i++){
        int j = i;
        while(arr[j]<arr[j-1] && j>0){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int ele :arr){
        cout<<ele<<" ";
    }
    return 0;
};