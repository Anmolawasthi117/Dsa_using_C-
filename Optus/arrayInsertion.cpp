#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={10,65,23,54};
    bool val = true;
   for(int i = 0;i<v.size();i++){
    if(v[i]<v[i+1]){
        val = true;
    }
    else{
        val = false;
    }
   }
   if(val == true){
    cout<<"is sorted";
   }
   else{
    cout<<"not sorted";
   }
    return 0;
};