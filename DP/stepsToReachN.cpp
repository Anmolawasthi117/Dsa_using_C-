#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int f(int n){
    int inf = INT_MAX;
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    return 1 + min({f(n-1), (n%2==0)?f(n/2):inf, (n%3==0)?f(n/3):inf});
}
vector<int> dp;
int ftd(int n){
    int inf = INT_MAX;
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n]= 1 + min({ftd(n-1), (n%2==0)?ftd(n/2):inf, (n%3==0)?ftd(n/3):inf});
}
int main(){
    int n;
    cin>>n;
    dp.clear();
    dp.resize(n+5, -1);
    cout<<ftd(n)<<endl;
    // cout<<f(n)<<endl;
    return 0;
};