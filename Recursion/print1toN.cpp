#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int print(int i,int n){
    if(i>n) return 0;
    cout<<i<<endl;
    print(i+1,n);
};


int main(){
    int n;
    cin>>n;
    print(1,n);
    return 0;
};