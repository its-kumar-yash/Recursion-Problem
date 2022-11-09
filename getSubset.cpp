#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    // Base Condition
    if (index == nums.size())
    {
        ans.push_back(output);
        return;
    }

    // exclusive Call
    solve(nums, output, index + 1, ans);

    // inclusive Call
    output.push_back(nums[index]);
    solve(nums, output, index + 1, ans);
}
vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> output;
    solve(nums, output, 0, ans);
    return ans;
}

int main()
{

    return 0;
}