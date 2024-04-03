#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(9);
    v.push_back(3);
    int x = 4;
    int idx = -1;
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        if(v[i] == x){
            idx = i;
        }
    } 
    cout<<idx;
    return 0;

};