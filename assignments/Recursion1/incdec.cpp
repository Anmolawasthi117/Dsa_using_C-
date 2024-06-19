#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void incdec(int x, int n){

     if(x>=n){
        cout<<n<<" ";
      return ;
     }        
    cout<<x<<" ";
    incdec(x+1,n);
    cout<<x<<" ";


}
int main(){
        int n;
        cin>>n;
        incdec(1,n);
    return 0;
};