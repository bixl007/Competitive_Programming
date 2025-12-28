#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long firstItem = min(cost1, costBoth);
        long long secondItem = min(cost2, costBoth);


        long long both = min(cost1 + cost2, costBoth);


        long long together = min(need1, need2);

        long long req = need1 - need2;
        req = abs(req);

        long long res = together * both;


        if(need1 > need2) {
            res += req * firstItem;
        }
        else 
            res += req * secondItem;


        return res;
    }
};