#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void display(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {6,5,3,2,8,10,9};
    int k = 3;
    int n = sizeof(arr)/4;
    priority_queue<int,vector<int>,greater<int>> pq;//min heap
    // vector<int> ans;
    int idx = 0;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            // ans.push_back(pq.top());
            arr[idx++] = pq.top();
            pq.pop();
        }
    }
    // display(ans);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    while(pq.size()!=0){
        // ans.push_back(pq.top());
        arr[idx++] = pq.top();
        pq.pop();
    }
    // display(ans);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
};