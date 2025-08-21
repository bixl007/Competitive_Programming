#include <string>

class Solution
{
public:
    std::string losingPlayer(int x, int y)
    {
        int totalCoins = x + y;
        int winner = 0;

        if (x * 75 + y * 10 < 115)
            return "Bob";

        else if (x * 75 + y * 10 == 115)
            return "Alice";
        else
        {
            bool Flag = false;
            while (x > 0 && y > 0)
            {
                if (x - 1 >= 0 && y - 4 >= 0)
                {
                    Flag = !Flag;
                }
                --x;
                y -= 4;
            }

            if (Flag)
                return "Alice";
            else
                return "Bob";
        }
    }
};