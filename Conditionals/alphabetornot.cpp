#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    char n;
    cout<<"Enter the character: ";
    cin>>n;
    int ascii = int(n);
    if (ascii>=65 && ascii<=90)
    {
        cout<<"Uppercase";
    }
    else if (ascii>=97 && ascii<=122)
    {
        cout<<"Lowercase";
    }
    
    return 0;
};