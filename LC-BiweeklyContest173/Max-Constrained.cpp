#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxVal(int n, vector<vector<int>>& restrictions, vector<int>& diff) {


        vector<int> answer(n, INT_MAX);
        answer[0] = 0;

        for(auto i : restrictions) {
            answer[i[0]] = min(answer[i[0]], i[1]);
        }

        for (int i = 0; i < n - 1; i++)
        {
            answer[i + 1] = min(answer[i + 1], answer[i] + diff[i]);
        }

        for (int i = n - 2; i >= 0; i--)
        {
            answer[i] = min(answer[i], answer[i + 1] + diff[i]);
        }

        int maxi = INT_MIN;
        int res = 0;

        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi, answer[i]);
        }



        return maxi;
        
        
        


    }
};