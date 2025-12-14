#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int absDifference(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());

        int n = nums.size(), s1 = 0, s2 = 0;

        for (int i = 0; i < k; i++)
        {
            s1 += nums[i];
        }
        for (int i = n - 1; i > n - k - 1; i--)
        {
            s2 += nums[i];
        }
        return abs(s2 - s1);
    }
};