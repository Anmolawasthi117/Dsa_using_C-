#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void nextp(vector<int> &nums){
    int n=nums.size();
    int idx = -1;
    for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            idx = i;
            break;
        }

    }
    if(idx==-1){
        reverse(nums.begin(),nums.end());
    }
    int j = -1;
    for(int i=n-1;i>=0;i--){
        if(nums[i]>nums[idx]){
            j = i;
            break;
        }
    }

    int temp = nums[idx];
    nums[idx] = nums[idx+1];
    nums[idx+1] = temp;
    return;
};
void display(vector<int> &nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}
int main(){
    vector<int> nums = {2,1,3};
    nextp(nums);
    display(nums);
    return 0;
};