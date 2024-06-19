#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void zigzag(int n){
    if(n==0)return;
    cout<<n;
    zigzag(n-1);
    cout<<n;
    zigzag(n-1);
    cout<<n;
}

int main(){
    zigzag(1);
    return 0;
};