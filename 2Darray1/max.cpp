#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
   int arr[2][2]={2,4,4,7};
    int max = arr[0][0];
    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
    }
    cout<<max;
    return 0;
};