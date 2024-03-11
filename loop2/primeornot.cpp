#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 2; i <= n-1; i++)
    {
        if (n%i==0)
        {
            cout<<"not prime"<<endl;
            break;
        }
        else{
            cout<<"prime"<<endl;
            break;
        }
        
    }
    
    return 0;
};