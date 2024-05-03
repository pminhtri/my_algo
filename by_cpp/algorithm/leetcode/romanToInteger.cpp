#include <bits/stdc++.h>

using namespace std;
int romanToInt(string s)
{
    int n = s.length();
    int sum = 0;
    int *c = new int[n];
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'I')
        {
            *(c + i) = 1;
        }
        else if (s[i] == 'V')
        {
            *(c + i) = 5;
        }
        else if (s[i] == 'X')
        {
            *(c + i) = 10;
        }
        else if (s[i] == 'L')
        {
            *(c + i) = 50;
        }
        else if (s[i] == 'C')
        {
            *(c + i) = 100;
        }
        else if (s[i] == 'D')
        {
            *(c + i) = 500;
        }
        else if (s[i] == 'M')
        {
            *(c + i) = 1000;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'I' && s[i + 1] == 'V')
        {
            sum = sum - *(c + i);
        }
        else if (s[i] == 'I' && s[i + 1] == 'X')
        {
            sum = sum - *(c + i);
        }
        else if (s[i] == 'X' && s[i + 1] == 'L')
        {
            sum = sum - *(c + i);
        }
        else if (s[i] == 'X' && s[i + 1] == 'C')
        {
            sum = sum - *(c + i);
        }
        else if (s[i] == 'C' && s[i + 1] == 'D')
        {
            sum = sum - *(c + i);
        }
        else if (s[i] == 'C' && s[i + 1] == 'M')
        {
            sum = sum - *(c + i);
        }
        else
        {
            sum = sum + *(c + i);
        }
    }
    cout << endl;
    delete[] c;
    return sum;
}