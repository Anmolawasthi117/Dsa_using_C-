#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<set>
using namespace std;

int main(){
    set<int> s;
    s.insert(1);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(5);
    for(int i:s){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
};