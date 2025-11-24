#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    string st;
    cin >> st;

    long long fourCnt = 0;
    long long eightCnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (st[i] == '4')
            fourCnt++;
        else
            eightCnt++;
    }

    long long a = x + y;
    long long b = x - y;

    long long distA = 0;
    if (abs(a) > fourCnt)
        distA = abs(a) - fourCnt;

    long long distB = 0;
    if (abs(b) > fourCnt)
        distB = abs(b) - fourCnt;

    if (distA + distB <= 2 * eightCnt)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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