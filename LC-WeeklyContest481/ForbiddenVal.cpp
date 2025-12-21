#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSwaps(vector<int>& nums, vector<int>& forbidden) {
        int n = nums.size();

        unordered_map<int, int> nF;
        unordered_map<int, int> fF;

        for(int i : nums)
            nF[i]++;
        for(int i : forbidden)
            fF[i]++;

        for(auto i : nF) {
            int val = i.first;
            int freq = i.second;

            if(freq + fF[val] > n)
                return -1;
        }

        int total = 0;
        unordered_map<int, int> tF;

        for (int i = 0; i < n; i++)
        {
            if(nums[i] == forbidden[i]){
                total++;
                tF[nums[i]]++;
            }
        }

        int maxi = 0;

        for(auto i : tF) {
            int val = i.first;
            int freq = i.second;

            maxi = max(maxi, freq);
        }

        return max((total + 1) / 2, maxi);


        
    }
};