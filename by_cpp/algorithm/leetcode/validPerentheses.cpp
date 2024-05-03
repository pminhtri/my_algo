#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<char> ch;
    for (auto x : s)
    {
        if (x == '(' || x == '[' || x == '{')
        {
            ch.push(x);
        }
        else
        {
            if (ch.empty())
            {
                return false;
            }
            if (x == ')' && ch.top() == '(')
            {
                ch.pop();
            }
            else if (x == ']' && ch.top() == '[')
            {
                ch.pop();
            }
            else if (x == '}' && ch.top() == '{')
            {
                ch.pop();
            }
            else
            {
                return false;
            }
        }
    }
    if (ch.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}