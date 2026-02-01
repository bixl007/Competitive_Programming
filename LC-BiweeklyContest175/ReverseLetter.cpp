#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseByType(string s)
    {
        string chars = "", special = "";

        for (char ch : s)
        {
            if (ch >= 'a' && ch <= 'z')
            {
                chars += ch;
            }
            else
            {
                special += ch;
            }
        }

        reverse(chars.begin(), chars.end());
        reverse(special.begin(), special.end());

        string res = "";

        int a = 0, b = 0;
        for (char ch : s)
        {
            if (ch >= 'a' && ch <= 'z')
            {
                res += chars[a++];
            }
            else
            {
                res += special[b++];
            }
        }

        return res;
    }
};