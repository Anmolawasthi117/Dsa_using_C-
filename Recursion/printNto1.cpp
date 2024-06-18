#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int print(int n){
    if(n==0) return 0;
    cout<<n<<endl;
    n--;
    print(n);
};


int main(){
    int n;
    cin>>n;
    print(n);
    return 0;
};