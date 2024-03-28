#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void starTriangle( int x){
     for(int i=1; i<=x;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
     }
}
int main(){
    starTriangle(5);
    starTriangle(6);
    starTriangle(7);
    return 0;
};