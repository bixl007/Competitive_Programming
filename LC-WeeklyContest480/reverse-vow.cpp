#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int vowCnt(string &st)
    {
        int cnt = 0;
        for (char ch : st)
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                cnt++;
        }
        return cnt;
    }
    string reverseWords(string s)
    {
        stringstream st(s);

        string temp, res = "";

        while (st >> temp)
        {
            int cnt = vowCnt(temp);
            res += temp;

            while (st >> temp)
            {
                res += " ";
                if (vowCnt(temp) == cnt)
                {
                    reverse(temp.begin(), temp.end());
                }
                
                res += temp;
            }
        }

        return res;
    }
};