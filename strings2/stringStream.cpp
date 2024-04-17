#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "anmol is GOAT";
    stringstream ss(str);
    string temp;
    while(ss >> temp){
        cout<<temp<<endl;
    }

    return 0;   
};