#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr [] = {1,2,3,4,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        arr[i] += arr[i-1];
    }
    int idx = -1;
    for(int i=1;i<n;i++){
        if(2*arr[i] == arr[n-1]){
            idx = i;
           break;
        }
    }
    if(idx!=-1)cout<<"yes partision is possible after"<<" "<<idx;
    else cout<<"partision is not possible";
    return 0;
};