#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    float l;
    cout<<"Enter the length of a rectangle ";
    cin>>l;
    float b;
    cout<<"Enter the length of a b ";
    cin>>b;
    float area= l*b;
    float parameter=2*(l+b);
    if (area>parameter)
    {
        cout<<"Area is greater than parameter";
    }
    else if(area<parameter){
        cout<<"parameter is greater than area";
    }

    return 0;
};