#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int stairs(int n){
    if(n==2) return 2;
    if(n==1) return 1;
    return stairs(n-1) + stairs(n-2);
}

int main(){
    int n;
    cin>>n;
int  steps =    stairs(n);
cout<<steps;
    return 0;
};