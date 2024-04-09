#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void display(int arr[2][3]){
    for(int i=0;i<=1;i++){
        for(int j=0;j<=2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[2][3]={2,6,4,8,9,5};
    int arr2[2][3]={5,6,7,4,2,7};
    int res[2][3];
    for(int i=0;i<=1;i++){
        for(int j=0;j<=2;j++){
            res[i][j]=arr[i][j]+arr2[i][j];
        }
    }
    display(arr);
    cout<<endl;
    display(arr2);
    cout<<endl;
  display(res);
    return 0;
};