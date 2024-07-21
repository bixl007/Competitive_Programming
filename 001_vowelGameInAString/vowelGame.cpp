#include <string>

class Solution
{
public:
    bool doesAliceWin(std::string s)
    {

        int countVowel = 0;

        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                countVowel++;
        }

        if (countVowel == 0)
            return false;
        return true;
    }
};
