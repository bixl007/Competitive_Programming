#include <vector>

class Solution
{
public:
    int numberOfAlternatingGroups(std::vector<int> &colors)
    {
        int len = colors.size() - 1;
        int count = 0;
        int i = 0;
        while (i <= len)
        {
            if (i == len)
            {
                if (colors[i] != colors[0] && colors[0] != colors[1])
                    count++;
                ++i;
            }
            else
            {
                int cond = i == len - 1 ? 0 : i + 2;
                if (colors[i] != colors[i + 1] && colors[i + 1] != colors[cond])
                    count++;
                ++i;
            }
        }
        return count;
    }
};