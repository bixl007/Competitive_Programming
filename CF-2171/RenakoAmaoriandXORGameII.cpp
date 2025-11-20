#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr1(n), arr2(n);
    for (int i = 0; i < n; ++i)
        cin >> arr1[i];
    for (int i = 0; i < n; ++i)
        cin >> arr2[i];

    int first = 0, second = 0;
    for (int i = 0; i < n; ++i)
    {
        first ^= arr1[i];
        second ^= arr2[i];
    }

    if (first == second)
    {
        cout << "Tie" << endl;
        return;
    }

    bool done = false;
    for (int k = 20; k >= 0; --k)
    {
        int cnt = 0, last = -1;
        for (int i = 0; i < n; ++i)
        {
            int x = (arr1[i] >> k) & 1;
            int y = (arr2[i] >> k) & 1;
            if (x != y)
            {
                cnt++;
                last = i;
            }
        }
        if (cnt % 2 == 1)
        {
            if ((last + 1) % 2 == 1)
                cout << "Ajisai" << endl;
            else
                cout << "Mai" << endl;
            done = true;
            break;
        }
    }

    if (!done)
        cout << "Tie" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}
