#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumPrefixLength(vector<int> &nums)
    {
        int n = nums.size();
        int i = 0;

        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
                i--;
            else
                return i + 1;
        }
        return i;
    }
};