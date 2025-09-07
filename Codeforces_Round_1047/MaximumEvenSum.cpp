#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b;
    cin >> a >> b;

    if (a % 2 != 0 && b % 2 != 0)
    {
        cout << max(a + b, a * b + 1) << endl;
    }
    else if (a % 2 == 0 && b % 2 == 0)
    {
        cout << max(a + b, a * (b / 2) + 2) << endl;
    }
    else if (a % 2 != 0 && b % 2 == 0)
    {
        if (b % 4 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            long long first = a * 2 + b / 2;
            long long second = a * (b / 2) + 2;
            cout << max(first, second) << endl;
        }
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}