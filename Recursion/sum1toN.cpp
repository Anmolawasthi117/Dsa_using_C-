#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void sumN(int sum,int n){
    if (n==0){
        cout<<sum;
        return;
    }
    sumN(sum+n,n-1);
}
int sum1(int n){
    if(n==0) return 0;
    return n + sum1(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<sum1(n);
    return 0;
};