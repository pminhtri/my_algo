#include <bits/stdc++.h>
using namespace std;

int turn = 0;

void replace(int n, char a, char b, char c)
{
    if (n == 1)
    {
        turn++;
        cout << "\n"
             << turn << ": " << a << "-->" << b;
    }
    else
    {
        replace(n - 1, a, c, b);
        replace(1, a, b, c);
        replace(n - 1, c, b, a);
    }
}