#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    bool palCheck(int n)
    {
        int temp = n;
        int temp1 = 0;

        while (n > 0)
        {
            temp1 = (temp1 << 1) | (n & 1);
            n >>= 1;
        }

        return temp1 == temp;
    }

public:
    vector<int> minOperations(vector<int> &nums)
    {
        vector<int> palin;
        int n = nums.size();

        int maxi = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            maxi = max(nums[i], maxi);
        }

        vector<int> ans;

        for (int i = 0; i <= 20000; i++)
        {
            if (palCheck(i))
                palin.push_back(i);
        }

        for (int i : nums)
        {
            int mini = INT_MAX;

            for (int j : palin)
            {
                int temp = abs(j - i);
                mini = min(temp, mini);
            }

            
            ans.push_back(mini);
        }

        return ans;
    }
};