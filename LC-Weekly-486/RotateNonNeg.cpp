#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> rotateElements(vector<int> &nums, int k)
    {
        int n = nums.size();

        vector<int> pos;

        for (int i : nums)
        {
            if (i >= 0)
                pos.push_back(i);
        }

        if (pos.size() == 0)
            return nums;

        k = k % pos.size();

        reverse(pos.begin(), pos.begin() + k);
        reverse(pos.begin() + k, pos.end());
        reverse(pos.begin(), pos.end());

        int i = 0;
        for (int &val : nums)
        {
            if (val >= 0)
            {
                val = pos[i++];
            }
        }
        return nums;
    }
};