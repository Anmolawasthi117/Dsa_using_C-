#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
        string s;
        getline(cin,s);
        int n = s.length();
        int count = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == ' '){
                count++;
            }
        }
        cout << count << endl;
        cout << s << endl;
    return 0;
};