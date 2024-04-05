#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void sort(vector<int> &nums)
{
    int lo = 0 ;
    int mid = 0;
    int hi = nums.size()-1;

    while(mid<=hi){
        if(nums[mid]==2){
            swap(nums[mid],nums[hi]);
            hi--;
        }
        else if(nums[mid]==0){
            swap(nums[mid], nums[lo]);
            lo++;
            mid++;
        }
        else{
            mid++;
        }
    }

}
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    display(v);
    sort(v);
    display(v);
    return 0;
}