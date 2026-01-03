#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;

        long long sum = 0;
        int mini = INT_MAX, l = 0, n = nums.size(), r = 0;

        while (r < n)
        {
            if(mpp[nums[r]] == 0) {
                sum += nums[r];
            }
            mpp[nums[r]]++;

            while (sum >= k)
            {
                mini = min(mini, r - l + 1);
                mpp[nums[l]]--;
                if(mpp[nums[l]] == 0)
                    sum -= nums[l];
                l++;
            }
            r++;
        }

        if(mini == INT_MAX)
            return -1;
        return mini;
        
        
    }
};