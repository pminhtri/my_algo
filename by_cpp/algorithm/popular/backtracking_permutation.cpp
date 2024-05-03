#include <bits/stdc++.h>
using namespace std;

int N, X[100], used[100];

void printResult()
{
    for (int i = 1; i <= N; i++)
    {
        cout << X[i] << " ";
    }
    cout << endl;
}

void permutation(int i)
{
    for (int j = 1; j <= N; j++)
    {
        if (!used[j])
        {
            X[i] = j;
            used[j] = 1;
            if (i == N)
            {
                printResult();
            }
            else
            {
                permutation(i + 1);
            }
            used[j] = 0;
        }
    }
}