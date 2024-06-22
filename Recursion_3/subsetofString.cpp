#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void store(string ans,string orignal,vector<string>& v){
    if("" == orignal){
        v.push_back(ans);
        return;
    }
    char ch = orignal[0];
     store(ans,orignal.substr(1),v);
     store(ans+ch,orignal.substr(1),v);
}

int main(){
    string str = "abc";
    vector<string> v;
    store("",str,v);
    for(string e:v){
        cout<<e<<endl;
    }
    return 0;
};