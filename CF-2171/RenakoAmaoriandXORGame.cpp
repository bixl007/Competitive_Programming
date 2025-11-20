#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr1(n), arr2(n);
    for (int i = 0; i < n; ++i)
    {

        cin >> arr1[i];
    }
    for (int i = 0; i < n; ++i)
    {

        cin >> arr2[i];
    }

    int xr1 = 0, xr2 = 0;
    for (int i = 0; i < n; ++i)
    {

        xr1 ^= arr1[i];
        xr2 ^= arr2[i];
    }

    if (xr1 == xr2)
    {
        cout << "Tie\n";
        return;
    }

    for (int i = n - 1; i >= 0; --i)
    {
        if (arr1[i] != arr2[i])
        {
            if (i % 2 == 0)
                cout << "Ajisai" << endl;
            else
                cout << "Mai" << endl;
            break;
        }
    }
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
