#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 float fact(int x){
    int f = 1;
    for(int i = 2;i<=x;i++){
        f *=i;
    }
    return f;
 }
 int com(int n,int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
 }
 int per(int n,int r){
    int npr = fact(n)/(fact(n-r));
    return npr;
 }
int main(){
    int n;
    cin>>n;
    int r;
    cin>>r;
    
    int ncr = com(n,r);
    int npr = per(n,r);
    cout<<ncr<<endl<<npr;
    return 0;
};