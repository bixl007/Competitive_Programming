#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countMonobit(int n)
    {
        if (n == 0)
            return 1;
        if (n < 0)
            return 0;

        long long bits = 1;
        int cnt = 1;

        while (bits <= n)
        {
            bits = (bits << 1) | 1;
            cnt++;
        }

        return cnt;
    }
};