#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "anmol is a nice guy,but he is a pnoti too";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);

    }
    sort(v.begin(),v.end());
    int maxC = 1;
    int count = 1;
    for(int i = 1; i < v.size(); i++){
        if(v[i] == v[i-1]){
            count++;
        }
        else{
            count = 1;
        }
        maxC = max(maxC, count);
    }
    count=1;
    for(int i = 1; i < v.size(); i++){
        if(v[i] == v[i-1]){
            count++;
        }
        else{
            count = 1;
        }
        if(count == maxC){
            cout<<v[i]<<" "<<maxC<<endl;
        }
    }
    
    return 0;
};