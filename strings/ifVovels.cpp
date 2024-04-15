#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "anmol awasthi";
    int count = 0;
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] == 'i' || str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
        i++;
    }
    cout<<count;
    return 0;
};