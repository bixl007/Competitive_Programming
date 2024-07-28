#include <vector>

class Solution
{
private:
    int digitCount(int n)
    {
        int count = 0;

        while (n != 0)
        {
            count++;
            n /= 10;
        }

        return count;
    }

public:
    bool canAliceWin(std::vector<int> &nums)
    {
        int s1 = 0, s2 = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (digitCount(nums[i]) == 1)
            {
                s1 += nums[i];
            }
            else
            {
                s2 += nums[i];
            }
        }
        return s1 != s2;
    }
};