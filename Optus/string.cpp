#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    string str = "128569";
   
    sort(str.begin(), str.end(), greater<int>());
    cout<<str<<endl;

    return 0;
};