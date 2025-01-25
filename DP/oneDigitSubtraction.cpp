#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int f(int n){
    if(n == 0) return 0;
    if(n <= 9) return 1;
    
}

int main(){
    int n;
    cin>>n;
    cout<<f(n)<<endl;
    return 0;
};