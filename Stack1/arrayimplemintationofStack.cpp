#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class stack{
    int arr[100];
    int idx = -1;
    void push(int val){
        idx++;
        arr[idx] = val;
    }
    void pop(){
        if(idx == -1){
            cout<<"stack is empty";
        }
        idx--;
    }
    int top(){
        if(idx == -1){
            cout<<"stack is empty";
            return -1;
        }
        return arr[idx];
    }
    void display(){
        for(int i = 0;i<=idx;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    
    return 0;
};