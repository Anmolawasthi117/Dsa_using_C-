#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    int arr[n]={2,3,5,6,5,3};
    int elment = 4;
    int pos = 3;
    for(int i=n-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=elment;
    n++;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
};