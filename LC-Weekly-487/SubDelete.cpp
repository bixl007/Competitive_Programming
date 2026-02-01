#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int finalElement(vector<int>& nums) {
        int n = nums.size();

        int first = nums[0];
        int last = nums[n - 1];

        int res = max(first, last);

        return res;
    }
};