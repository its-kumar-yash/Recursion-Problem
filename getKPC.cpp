#include <bits/stdc++.h>
using namespace std;

vector<string> solve(string digits)
{
    vector<string> mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}; // mapping vector

    // Base Condition
    if (digits.length() == 0)
    {
        vector<string> base;
        base.push_back("");
        return base;
    }

    char ch = digits[0];
    string ros = digits.substr(1);    // rest of string
    vector<string> rres = solve(ros); // recursion result
    vector<string> ans;               // answer

    string mapString = mapping[ch - '0']; // mapping string
    for (int i = 0; i < mapString.length(); i++)
    {

        for (int j = 0; j < rres.size(); j++)
        {

            ans.push_back(mapString[i] + rres[j]);
        }
    }
    return ans;
}

vector<string> letterCombinations(string digits)
{
    if (digits == "")
    {
        return {};
    }

    return solve(digits);
}

int main()
{

    return 0;
}