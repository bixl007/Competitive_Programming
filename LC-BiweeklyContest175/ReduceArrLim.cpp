#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checker(vector<int> nums, int lim) {
        int ops = 0;
        int k = lim * lim;

        for(int i = 0; i < nums.size(); i++) {
            ops += (nums[i] + lim - 1) / lim;
            if(ops > k)
                return false;
        }

        return true;
    }
    int minimumK(vector<int>& nums) {
        int l = 0, r = 1e5;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if(checker(nums, mid)) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return l;
        
    }
};