#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    int MOD = 1e9 + 7;

public:
    int alternatingXOR(vector<int> &nums, int target1, int target2)
    {
        int maxi = max(target1, target2);

        for (int i : nums)
        {
            maxi = max(maxi, i);
        }

        int sz = 1;
        while (sz <= maxi)
        {
            sz *= 2;
        }

        vector<vector<int>> dp(sz, vector<int>(2, 0));
        int curr = 0, ans = 0;
        dp[0][0] = 1;

        for (int i : nums)
        {
            curr ^= i;

            int prev = curr ^ target1;
            int temp1 = 0;

            if (prev < sz)
            {
                temp1 = dp[prev][0];
            }

            int prev2 = curr ^ target2;
            int temp2 = 0;

            if (prev2 < sz)
            {
                temp2 = dp[prev2][1];
            }

            dp[curr][1] = (dp[curr][1] + temp1) % MOD;

            dp[curr][0] = (dp[curr][0] + temp2) % MOD;

            ans = (temp1 + temp2) % MOD;
        }
        return ans;
    }
};