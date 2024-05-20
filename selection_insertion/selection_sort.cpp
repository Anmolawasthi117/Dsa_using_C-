#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {5,6,4,2,1};
    int n = 5;
    for( int ele: arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    // selection sort
    for(int i = 0; i<n-1; i++){
        int min = INT_MAX;
        int min_index = -1;
        for(int j = i; j<n; j++){
            if(arr[j] < min){
                min = arr[j];
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
    for( int ele: arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    return 0;
};