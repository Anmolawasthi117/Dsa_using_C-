#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int f = 1;
    int i = 1;
    while (n>=i)
    {
        f = f*i;
        i++;
        cout<<f<<endl;
    }
    
    return 0;
};