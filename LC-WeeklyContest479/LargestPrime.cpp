#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    vector<bool> primeCheck(int n)
    {

        vector<bool> primeSeive(n + 1, true);
        primeSeive[0] = false;
        primeSeive[1] = false;

        for (int p = 2; p * p <= n; p++)
        {
            if (primeSeive[p])
            {
                for (int i = p * p; i <= n; i += p)
                    primeSeive[i] = false;
            }
        }

        return primeSeive;
    }

public:
    int largestPrime(int n)
    {
        vector<bool> primes = primeCheck(n);

        int sum = 0;
        int res = 0;

        for (int i = 2; i <= n; i++)
        {
            if (primes[i])
            {
                sum += i;
                if (sum > n)
                    break;

                if (primes[sum])
                {
                    res = sum;
                }
            }
        }


        return res;
    }
};