#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string reversePrefix(string s, int k) {
        string temp = s;
        reverse(temp.begin(), temp.begin() + k);

        return temp;
    }
};