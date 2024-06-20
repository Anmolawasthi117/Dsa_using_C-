#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void Max(int arr[],int n,int i,int max){
if(i==n) {
    cout<<max;
    return;
};
if(max<arr[i]) max= arr[i];
    Max(arr,n,i+1,max);
}

int main(){
    int arr[]= {1,20,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    Max(arr,n,0,INT_MIN);
    return 0;
};