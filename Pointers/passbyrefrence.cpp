#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    cout<<*a<<" "<<*b;
};
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    swap(&n,&x);
    return 0;
};