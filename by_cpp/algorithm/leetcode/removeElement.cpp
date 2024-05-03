#include <bits/stdc++.h>

using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int i = 0;
    for (int elem : nums)
    {
        if (elem != val)
        {
            nums[i] = elem;
            i++;
        }
    }
    return i;
}
