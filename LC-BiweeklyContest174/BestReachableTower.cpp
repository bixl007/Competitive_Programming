#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> bestTower(vector<vector<int>> &towers, vector<int> &center, int radius)
    {
        vector<int> res = {-1, -1};

        int x = center[0];
        int y = center[1];

        int maxi = -1;

        for (auto i : towers)
        {
            int first = i[0];
            int second = i[1];
            int val = i[2];

            int diff = abs(first - x) + abs(second - y);

            if (diff <= radius)
            {
                if (val > maxi)
                {
                    maxi = val;
                    res = {first, second};
                }
                else if (maxi == val)
                {

                    if (first < res[0] || (first == res[0] && second < res[1]))
                    {
                        res = {first, second};
                    }
                }
            }
        }

        return res;
    }
};