#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,m,n;
    cout<<"Enter the sides of triangle ";
    cin>>s,m,n;
    if(s==m && m==n){
        cout<<"Equilateral triangle";
    }
    else if(s==m || m==n || n==s){
        cout<<"Isosceles triangle";
    }
    else{
        cout<<"Scalene triangle";
    }

    return 0;
};