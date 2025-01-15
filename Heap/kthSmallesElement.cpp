#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2,-4,65,52,102,74,19};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    priority_queue<int> pq;//max heap
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            pq.pop();
        }
    }   
    cout<<pq.top()<<endl;
    return 0;
};