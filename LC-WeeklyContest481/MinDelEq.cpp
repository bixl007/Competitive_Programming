#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        long long tempp = 0;

        vector<long long>  checker(26, 0);
        for (int i = 0; i < cost.size(); i++)
        {
            tempp += cost[i];
            checker[s[i] - 'a'] += cost[i];
        }

        long long temp = 0;

        for(long long i : checker) {
            temp = max(temp, i);
        }

        return tempp - temp;
        
    }
};