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
    int profit=sp-cp;
    int loss=cp-sp;

    if (cp<sp)
    {
        cout<<" you are making profit of :"<<profit;
    }
    else{
        cout<<" you are making loss of :"<<"-"<<loss;
    }
    
    
    return 0;
};