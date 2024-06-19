#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int pow(int x,int n){
    if(n==1)return x;
    int ans = pow(x,n/2);
    if(n%2==0)
    return ans*ans;
    return ans*ans*x;
}
int main(){
    int n;
    int x;
    cin>>x;
    cin>>n;
    cout<< pow(x,n);
    return 0;
};