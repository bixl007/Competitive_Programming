#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << 0 << endl;
        return ;
    }
    if (n & 1)
    {
        cout << 0 << endl;
        return ;
    }

    int cnt = n / 4 + 1;
    cout << cnt << endl;

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
}