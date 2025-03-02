#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
vector<int> sortArrayByParity(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] % 2 == 0)
        {
            nums[i] = 0;
        }
        else
            nums[i] = 1;
    }
    sort(nums.begin(), nums.end());
    return nums;
}
int main()
{
    vector<int> nums = {1,5,1,4,2};
    vector<int> ans = sortArrayByParity(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
