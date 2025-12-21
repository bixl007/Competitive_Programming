#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long maximumScore(vector<int> &nums, string s)
    {
        long long res = 0;
        int n = nums.size();
        priority_queue<int> temppp;

        for (int i = 0; i < n; i++) 
        {
            temppp.push(nums[i]);

            if (s[i] == '1')
            {
                if (!temppp.empty())
                {
                    res += temppp.top();
                    temppp.pop();
                }
            }
        }



        return res;
    }
};