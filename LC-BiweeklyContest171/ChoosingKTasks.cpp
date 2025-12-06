#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxPoints(vector<int>& technique1, vector<int>& technique2, int k) {
        int n = technique1.size();
        long long sum = 0;
        
        for(int i = 0; i < n; i++) {
            sum += technique2[i];
        }

        vector<int> diff;
        for (int i = 0; i < n; i++)
        {
            int temp = technique1[i] - technique2[i];
            diff.push_back(temp);
        }

        sort(diff.begin(), diff.end());
        reverse(diff.begin(), diff.end());

        for (int i = 0; i < n; i++)
        {
            if(i < k) {
                sum += diff[i];
            }
            else {
                if(diff[i] > 0)
                    sum += diff[i];
            }
        }
        return sum;
        
    }
};