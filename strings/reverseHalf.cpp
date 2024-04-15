#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    int n = str.length();
    reverse(str.begin(), str.begin()+n/2);
    cout<<str;
    return 0;
};