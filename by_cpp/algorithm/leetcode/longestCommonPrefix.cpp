#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    string ans = "";
    auto currentLen = strs[0].length();
    int minLen;
    if (strs[0] == "")
    {
        return ans;
    }
    for (int i = 0; i < strs.size(); i++)
    {
        minLen = min(currentLen, strs[i].length());
        if (minLen < currentLen)
        {
            currentLen = minLen;
        }
    }
    for (int i = 0; i < minLen; i++)
    {
        for (int j = 0; j < strs.size(); j++)
        {
            if (strs[0][i] != strs[j][i])
            {
                return ans;
            }
        }
        ans += strs[0][i];
    }
    return ans;
}