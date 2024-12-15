#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> m;
    m["gfg"]=20;
    m["ide"]=30;
    m["leetcode"]=200;
    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    
    return 0;
};