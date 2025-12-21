#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(vector<int> &nums)
    {

        int maxi = *max_element(nums.begin(), nums.end());
        vector<int> checker(maxi + 1, 0);
        int n = nums.size();

        for (int i = n - 1; i >= 0; i--)
        {
            if (checker[nums[i]])
            {
                return ((i + 1 + 2) / 3);
            }
            checker[nums[i]] = 1;
        }
        return 0;
    }
};