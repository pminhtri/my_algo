#include <bits/stdc++.h>
using namespace std;

// Sieve of Eratosthenes
// 0 < n < 10^6
int prime[1000001];

void sieve()
{
    for (int i = 2; i <= 1000000; i++)
    {
        prime[i] = 1;
    }
    for (int i = 2; i <= 1000000; i++)
    {
        if (prime[i] == 1)
        {
            for (int j = 2 * i; j <= 1000000; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}

// bonus: Sieve in range
//  0 < n < 10^6
void sieveByRange(int l, int r)
{
    int prime[r - l + 1];
    for (int i = 0; i < r - l + 1; i++)
    {
        prime[i] = 1;
    }
    for (int i = 2; i <= sqrt(r); i++)
    {
        for (int j = max(i * i, (l + i - 1) / i * i); j <= r; j += i)
        {
            prime[j - l] = 0;
        }
    }
    for (int i = max(l, 2); i <= r; i++)
    {
        if (prime[i - l] == 1)
        {
            cout << i << " ";
        }
    }
}