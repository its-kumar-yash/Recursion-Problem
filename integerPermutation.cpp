#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums, vector<vector<int>> &ans, int index)
{
    // Base Condition
    if (index == nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for (int j = index; j < nums.size(); j++)
    {
        swap(nums[j], nums[index]);
        solve(nums, ans, index + 1);
        // Backtracking
        swap(nums[j], nums[index]);
    }
}
vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    int index = 0;
    solve(nums, ans, index);
    return ans;
}

int main()
{

    return 0;
}