#include <bits/stdc++.h>
using namespace std;

int N, X[100];

void printResult()
{
    for (int i = 1; i <= N; i++)
    {
        cout << X[i] << " ";
    }
    cout << endl;
}

void turn(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        X[i] = j;
        if (i == N)
        {
            printResult();
        }
        else
        {
            turn(i + 1);
        }
    }
}
