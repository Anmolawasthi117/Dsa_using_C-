#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the selling price : ";
    int sp;
    cin>>sp;
    cout<<"Enter the cost price : ";
    int cp;
    cin>>cp;
    if (cp<sp)
    {
        cout<<" you are making profit";
    }
    else{
        cout<<" you are making loss";
    }
    
    
    return 0;
};