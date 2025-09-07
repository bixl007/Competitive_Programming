#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k, x;
    cin >> k >> x;

    while (k--)
    {
        x = x * 2;
    }

    cout << x << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}