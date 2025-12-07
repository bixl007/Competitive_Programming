#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    static bool comp(int a, int b)
    {
        int num1 = revBits(a), num2 = revBits(b);
        if (num1 == num2)
            return a < b;
        return num1 < num2;
    }

    static int revBits(int n)
    {
        int newRev = 0;

        while (n)
        {
            newRev = (newRev << 1) | (n & 1);
            n >>= 1;
        }
        return newRev;
    }

public:
    vector<int> sortByReflection(vector<int> &nums)
    {
        sort(nums.begin(), nums.end(), comp);
        return nums;
    }
};