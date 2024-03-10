#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    float r;
    cout<<"Enter the radius of a circel ";
    cin>>r;
    float area=3.14*r*r;
    float circumference=2*3.14*r;
    if (area>circumference)
    {
        cout<<"Area is greater than circumference";
    }
    else if(area<circumference){
        cout<<"Circumference is greater than area";
    }

    return 0;
};