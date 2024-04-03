#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(14);
    v.push_back(20);
    v.push_back(3);
    v.push_back(46);
     
     for (int i = 0; i < v.size(); i++)
     {
      cout<<v.at(i)<<" ";
     }; 
     cout<<endl;
     sort(v.begin(),v.end());
     for (int i = 0; i < v.size(); i++)
     {
      cout<<v.at(i)<<" ";
     };
    return 0;
};