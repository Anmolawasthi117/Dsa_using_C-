#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void hnoi(int n,char a,char b,char c){
    if(n==0)return;
    hnoi(n-1,a,c,b);
    cout<<a<<"->"<<c<<endl;
    hnoi(n-1,b,a,c);                           
}
int main(){
    int n = 2;
    hnoi(n,'A','B','C');
    return 0;
};