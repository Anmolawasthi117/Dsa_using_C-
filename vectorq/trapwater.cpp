#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void water(vector<int> &hight ){
    int trap(vector<int>& height)
    int n = hight.size();
    int prev[n];
    int max = hight[0];
    for(int i=0;i<n;i++){
        prev[i] = max;
        if(hight[i]>max)
            max = hight[i];
    }
    int next[n];
    next[n-1] = -1;
    max = hight[n-1];
    for(int i=n-2;i>=0;i--){
        next[i] = max;
        if(hight[i]>max)
            max = hight[i];
    }
    int min[n];
    for(int i=0;i<n;i++){
        min[i] = min(prev[i],next[i]);
    }
    int water = 0;
    for(int i=0;i<n;i++){
        water += min[i] - hight[i];
    }
    return water;
}
int main(){
    vector<int> hight = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<water(hight);
    return 0;
};