#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int zeroCnt = 0;
    int negCnt = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == -1)
            negCnt++;
        if (arr[i] == 0)
            zeroCnt++;
    }

    int ans = 0;

    ans += zeroCnt;
    ans += (negCnt % 2) * 2;

    cout << ans << endl;
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