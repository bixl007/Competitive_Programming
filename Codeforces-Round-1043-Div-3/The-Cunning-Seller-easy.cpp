#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--)
    {
        long long n;
        cin >> n;

        long long ans = 0;
        long long temp = 0;
        long long power = 1;

        while (n > 0)
        {
            long long res = n % 3;
            if (res > 0)
            {
                long long deal;
                if (temp == 0)
                {
                    deal = 3;
                }
                else
                {
                    deal = power * 3 + temp * (power / 3);
                }
                ans += res * deal;
            }
            n /= 3;
            power *= 3;
            temp++;
        }

        cout << ans << endl;
    }

    return 0;
}

