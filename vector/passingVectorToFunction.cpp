#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 void change(vector <int>& a){
    a.at(0)=100;
 }
 
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
     change(v);
     for (int i = 0; i < v.size(); i++)
     {
      cout<<v.at(i)<<" ";
     };
    return 0;
};