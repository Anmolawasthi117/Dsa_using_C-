#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "a,b,c,d,x,c,y,z,y,z,x";
    string strs ="";
    int n = str.length();
    bool flag = true;
    for(int i=0;i<str.length();i++){
        if(str[i]>='x'){
            strs.push_back(str[i]);
        }
    }
     for(int i=0;i<strs.length();i++){
        cout<<strs[i]<<" ";
    }
    cout<<endl;
    sort(strs.begin(), strs.end());
    cout<<"after sorting"<<endl;
    for(int i=0;i<strs.length();i++){
        cout<<strs[i]<<" ";
    }
    cout<<endl;
     for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(strs[j]>strs[j+1]){
                flag = false;
                swap(strs[j],strs[j+1]);
            }
             
        }
        if(flag == true){
                break;
            }
    }
    for(int i=0;i<strs.length();i++){
        cout<<strs[i]<<" ";
    }
    return 0;
};