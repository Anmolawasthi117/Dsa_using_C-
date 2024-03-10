#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cout<<"Enter the point x: ";
    cin>>x;
    int y;
    cout<<"Enter the point y: ";
    cin>>y;
    if(x>0 && y>0)
        cout<<"Point lies in y axis";
        else if(x<0 && y>0)
        cout<<"Point lies in x axis";
        else if(x==0 && y==0)
        cout<<"Point lies at origin";
    return 0;
};