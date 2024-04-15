#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    // string s;
    // for(int i=0;i<n;i++){
    //     cin>>s;
       
    // }
    string str = "anmol";
    for(int i=0;str[i]!='\0';i++){
        if(i%2==0) str[i] = 'a';
    }
    cout<<str;
    return 0;
};