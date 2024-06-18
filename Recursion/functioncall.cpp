#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void greet(int n){
    if(n==0)return;
    cout<<"good morning"<<endl;
    n--;
    greet(n);
};


int main(){
    int n;
    cin>>n;
    greet(n);
    return 0;
};