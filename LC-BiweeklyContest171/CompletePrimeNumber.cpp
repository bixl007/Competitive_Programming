#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    bool checkPrime(int n)
    {
        if (n <= 1)
            return false;
        if (n <= 3)
            return true;
        if(n % 2 == 0 || n % 3 == 0)
            return false;
        
        for (int i = 5; i * i < n; i += 6)
        {
            if(n % i == 0 || n % (i + 1) == 0)
                return false;
        }

        return true;
        
    }

public:
    bool completePrime(int num)
    {
        string temp = to_string(num);
        int n = temp.length();

        for (int i = 1; i <= n; ++i) {
            int pref = stoi(temp.substr(0, i));
            int suf = stoi(temp.substr(n - i));

            if (!checkPrime(pref)) 
                return false;
                
            if (!checkPrime(suf)) 
                return false;
        }
        return true;
    }
};