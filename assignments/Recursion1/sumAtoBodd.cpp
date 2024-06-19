#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void incdec(int x, int n){

     if(x>n)return;        
    cout<<x<<" ";
    incdec(x+2,n);
    


}
int main(){
        int a;
        cout<<"Enter a : ";
        cin>>a;
        int b;
        cout<<"Enter b : ";
        cin>>b;
        if(a%2==0)a++;
        incdec(a,b);
    return 0;
};