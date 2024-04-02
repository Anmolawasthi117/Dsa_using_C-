#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int* p = &n;
    int* q = &x;
    
    cout<<*p+*q;
    return 0;
};