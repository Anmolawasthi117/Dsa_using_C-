#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cout<<"enter the target sum"<<endl;
    cin>>x;
    vector<int> v;
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        v.push_back(e);
    }
    for (int i = 0; i <=v.size()-2; i++)
    {
        for (int j = i+1; j <=v.size()-1; j++)
        {
             if (v[i]+v[j]==x)
             {
                cout<<i<<", "<<j<<endl;
             }
             
        }
        
        
    }
    
    return 0;
};