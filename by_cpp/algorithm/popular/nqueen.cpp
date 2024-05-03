#include <bits/stdc++.h>
using namespace std;

int N, X[100], rows[100], d1[100], d2[100];
int count = 0;
int chestTable[100][100];

void print()
{
    memset(chestTable, 0, sizeof(chestTable));

    for (int i = 1; i <= N; i++)
    {
        chestTable[i][X[i]] = 1;
    }
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cout << chestTable[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
}

void nqueen(int i)
{
    for (int j = 1; j <= N; j++)
    {
        if (!rows[j] && !d1[i - j + N] && !d2[i + j - 1])
        {
            X[i] = j;
            rows[j] = 1;
            d1[i - j + N] = 1;
            d2[i + j - 1] = 1;
            if (i == N)
            {
                print();
            }
            else
            {
                nqueen(i + 1);
            }
            rows[j] = 0;
            d1[i - j + N] = 0;
            d2[i + j - 1] = 0;
        }
    }
}