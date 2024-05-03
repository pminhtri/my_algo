#include <bits/stdc++.h>

using namespace std;

int thirdMax(vector<int> &nums)
{
    int max1 = nums[0], max2 = nums[0], max3 = nums[0], tmp = 0, k;
    int len = static_cast<int>(nums.size());
    for (int i = 0; i < len; i++)
    {
        if (max1 < nums[i])
        {
            max1 = nums[i];
        }
    }
    for (int i = 0; i < len; i++)
    {
        tmp = nums[i];
        k = 0;
        if (tmp == max1)
        {
            continue;
        }
        else
        {
            if (max2 == max1)
            {
                max2 = nums[i];
            }
            if (max2 < nums[i])
            {
                max2 = nums[i];
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        tmp = nums[i];
        k = 0;
        if (tmp == max1 || tmp == max2)
        {
            continue;
        }
        else
        {
            if (max3 == max1 || max3 == max2)
            {
                max3 = nums[i];
            }
            if (max3 < nums[i])
            {
                max3 = nums[i];
            }
        }
    }
    if (max2 == max1)
    {
        return max1;
    }
    else if (max3 == max1)
    {
        return max1;
    }
    else if (max3 == max2)
    {
        return max1;
    }
    return max3;
}