#include <bits/stdc++.h>
using namespace std;

void analysis(int n)
{
    cout << n << " = ";
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            cout << i;
            n /= i;
            if (n != 1)
            {
                cout << " * ";
            }
        }
    }
    cout << endl;
}