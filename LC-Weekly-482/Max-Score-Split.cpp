#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        long long size = nums.size();

        vector<int> sufCheck(size);
        sufCheck[size - 1] = nums[size - 1];

        for (int i = size - 2; i >= 0; i--)
        {
            sufCheck[i] = min(nums[i], sufCheck[i + 1]);
        }


        long long total = 0;

        long long res = LLONG_MIN;

        for (int i = 0; i < size - 1; i++)
        {
            total += nums[i];

            long long temp = total - sufCheck[i + 1];

            res = max(temp, res);
        }


        return res;
        
        
    }
};