#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"enter a positve no";
    int n;
    cin>>n;
    if (n>0)
    {
        
        if (n%5==0||n%3==0)
    {
        if (n%15==0)
        {
            cout<<"Your no is divisible by 15";
        }
        
        else{
            cout<<"Your no is divisible by 5 or 3";
        }
    }
    else{
        cout<<"Your no is not divisible by 5 or 3";
    }
    }
    else{
        cout<<"Your no is negative";
    }
    
    
    
    return 0;
};