#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[8] = {
        1,2,4,5,6,16,17,18
    };
    int n= 8;
    int x = 15;
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<hi){
        int mid = (lo+hi)/2;
        if(arr[mid]==x){
            cout<<arr[mid-1]<<endl;
            break;
        }
        else if(arr[mid]<x){
            hi = mid-1;
            flag = true;
        }
        else{
            lo = mid+1;
        }
    if(flag == false){
        cout<<arr[hi]<<endl;
    }
    }
    return 0;
};