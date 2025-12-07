#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long totalScore(int hp, vector<int>& damage, vector<int>& requirement) {
        int n = damage.size();
        vector<long long> pref(n + 1, 0);

        for(int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + damage[i];
        }

        long long res = 0;
        for(int i = 0; i < n; i++) {
            long long val = pref[i + 1] + requirement[i] - hp;

            int indLower = lower_bound(pref.begin(), pref.begin() + i + 1, val) - pref.begin();
            res = res + i - indLower + 1;
        }

        return res;
    }
};