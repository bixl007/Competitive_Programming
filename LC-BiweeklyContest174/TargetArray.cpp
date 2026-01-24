#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(vector<int> &nums, vector<int> &target)
    {
        unordered_set<int> st;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            if (nums[i] != target[i])
                st.insert(nums[i]);
        }

        int res = 0;

        res = st.size();

        return res;
    }
};
