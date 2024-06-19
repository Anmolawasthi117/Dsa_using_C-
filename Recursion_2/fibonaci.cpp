#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n==1||n==2) return 1;
    int left = fibo(n-1);
    int right = fibo(n-2);
     return left + right;

}

int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
};