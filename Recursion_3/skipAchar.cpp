#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void removeA(string ans,string orignal,int i){
    if(i == orignal.length()){
        cout<<ans;
        return;
    }
    char ch = orignal[i];
    if(ch == 'a') removeA(ans,orignal,i+1);
    else removeA(ans+ch,orignal,i+1);
}

int main(){
    string str = "anmol awasthi";
    removeA("",str,0);
    return 0;
};