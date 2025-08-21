#include <string>
#include <algorithm>

class Solution
{
public:
    std::string getSmallestString(std::string s)
    {
        for (int i = 0; i < s.length() - 1; i++)
        {
            int temp1 = s[i] - '0';
            int temp2 = s[i + 1] - '0';
            // cout << temp1 << endl;
            // cout << temp2 << endl;
            if (((temp1 % 2 == 0 && temp2 % 2 == 0) || (temp1 % 2 != 0 && temp2 % 2 != 0)) && temp2 < temp1)
            {
                std::swap(s[i], s[i + 1]);
                break;
                // cout << "**" << endl;
                // cout << swapVal << endl;
                // cout << s[i] << endl;
                // cout << s[i+1] << endl;
                // cout << "**" << endl;
            }
            // cout << s << endl;
        }
        return s;
    }
};