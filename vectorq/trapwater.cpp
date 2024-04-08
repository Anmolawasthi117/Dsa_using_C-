#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void water(vector<int> &height ){
    int n = height.size();
        int prev[n];
        prev[0] = -1;
        int max = height[0];
        for(int i=1;i<n;i++){
            prev[i] = max;
            if(max<height[i]){
                max = height[i];
            }
        }
        int next[n];
        next[n-1] = -1;
        max = height[n-1];
        for(int i=n-2;i>=0;i--){
            next[i] = max;
            if(max<height[i]){
                max = height[i];
            }
        }
        
        for(int i = 0;  i<n;i++){
            prev[i] = min(prev[i],next[i]);

        }
        int water = 0;
        for(int i = 1; i<n-1;i++){
            if(height[i]<prev[i]){
            water +=(prev[i]-height[i]);
            }
        }
        return water;

}
display(int ans){
    cout<<ans;
}
int main(){
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
   
display(water(height););
    return 0;
};