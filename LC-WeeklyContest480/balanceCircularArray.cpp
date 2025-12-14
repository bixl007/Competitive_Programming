#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minMoves(vector<int>& balance) {
        int n = balance.size();

        long long sum = 0, idx = -1;

        for(int i = 0; i < n; i++) {
            sum += balance[i];
            if(balance[i] < 0)
                idx = i;
        }

        if(idx <= -1)
            return 0;

        if(sum < 0)
            return -1;

        vector<pair<int, int>> arr;

        for (int i = 0; i < n; i++)
        {
            if(balance[i] > 0) {
                int diff = abs(i - idx);
                int temp = min(diff, n - diff);

                arr.push_back({temp, balance[i]});
            }
        }

        sort(arr.begin(), arr.end());

        long long res = 0, req = abs(balance[idx]);

        for(auto &i : arr) {
            long long diff = i.first;
            long long val = i.second;

            long long temp = min(req, val);

            res += temp * diff;
            req -= temp;

            if(!req) break;

        }
        return res;
        
    }
};