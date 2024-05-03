#include <bits/stdc++.h>

using namespace std;

void reverseString(vector<char> &s)
{
    int n = s.size(), i = 0;
    vector<char> t = s;
    while (!t.empty())
    {
        s[i] = t.back();
        i++;
        t.pop_back();
    }
}