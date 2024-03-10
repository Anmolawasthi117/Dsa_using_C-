#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if (a<b && a<c)
    {
        cout<<a<<"have the lowest marks ";
    }
    else if (b<c)
    {
        cout<<b<<"have the lowest marks ";
    }
    else
    {
        cout<<c<<"have the lowest marks ";
    }
    return 0;
};