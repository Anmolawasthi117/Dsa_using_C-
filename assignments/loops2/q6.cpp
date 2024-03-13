#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int rev = 0;
    int ld = 0;
    int sum = 0;
    
    while(n>0){
        ld = n%10;
        
         rev = rev*10 + ld;
         sum = sum + ld;
        n = n/10;
    }
    cout<<rev<<endl<<"The sum of no is :"<<sum;  
    return 0;
};