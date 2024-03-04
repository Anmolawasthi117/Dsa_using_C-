#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
     cout<<"Enter your Number";
    int n;
    cin>>n;
    if (n>=100&&n<=999)
    {
        cout<<"Three digit number";
    }
    else{
        cout<<"Not a three digit number";
    }
    
    return 0;
};