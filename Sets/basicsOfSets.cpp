#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    int target = 4;
    if(s.find(target)!=s.end()){
        cout<<"found"<<" "<<target<<endl;
    }
    for(int ele : s){
        cout<<ele<<" ";
    }
    return 0;
};