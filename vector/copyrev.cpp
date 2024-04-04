#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for (int i = 0; i<n; i++)
    {
        int m;
        cin>>m;
        v.push_back(m);
    }
    display(v);
    vector<int>v2(v.size());
    for (int i = 0; i <= v2.size(); i++)
    {
      
        v2[i] = v[v.size()-1-i];
    }
    display(v2);
    
    return 0;
};