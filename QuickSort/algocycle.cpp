#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void display(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr [] = {2,5,7,6,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
   display(arr, n);
    cout<<endl;
    int i = 0;
    while(i<n){
       int correctIndx = arr[i] - 1;
       if(i==correctIndx){
        i++;
       }
       else{
        swap(arr[i],arr[correctIndx]);
       }
    }
       display(arr, n);

    return 0;
};