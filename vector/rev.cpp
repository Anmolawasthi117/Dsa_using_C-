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
    int i = 0;
    int j= v.size()-1;
    display(v);
    while (i<=j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    display(v);
    return 0;
};