#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void min(int n,int m){
    if(n<m){
        cout<<n<<"is smaller";
    }
    else{
        cout<<m<<" is smaller";
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    min(n,m);
    return 0;
};