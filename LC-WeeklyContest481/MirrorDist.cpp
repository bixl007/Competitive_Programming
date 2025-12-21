#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mirrorDistance(int n) {
        int temp = n;
        int sum = 0;

        while(temp) {
            int temp1 = temp % 10;
            sum = sum * 10 + temp1;

            temp /= 10;
        }

        return abs(sum - n);
    }
};