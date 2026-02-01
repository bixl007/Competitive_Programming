#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int solve(vector<int> &arr)
    {
        vector<int> lis;

        for (int i = 0; i < arr.size(); i++)
        {
            auto it = lower_bound(lis.begin(), lis.end(), arr[i]);

            if (it == lis.end())
            {
                lis.push_back(arr[i]);
            }
            else
            {
                *it = arr[i];
            }
        }

        return lis.size();
    }

    int longestSubsequence(vector<int> &nums)
    {
        int maxi = 0;

        for (int i = 0; i <= 30; i++)
        {
            vector<int> arr;

            for (int j = 0; j < nums.size(); j++)
            {
                if (((nums[j] >> i) & 1) == 1)
                {
                    arr.push_back(nums[j]);
                }
            }

            if (arr.size() > 0)
            {
                maxi = max(maxi, solve(arr));
            }
        }

        return maxi;
    }
};