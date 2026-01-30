#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n, m;
    cin >> n >> m;

    string st1, st2;
    cin >> st1 >> st2;

    vector<int> mini(m, INT_MAX);
    vector<int> prev(m, INT_MAX);

    int res = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        vector<int> curr(m, INT_MAX);

        if (st1[i] == st2[0])
        {
            if (i > 0)
            {
                curr[0] = 1;
            }
            else
            {
                curr[0] = 0;
            }
        }

        for (int j = 1; j < m; j++)
        {
            if (st1[i] == st2[j])
            {
                int cnt = prev[j - 1];
                int diff = INT_MAX;

                if (mini[j - 1] != INT_MAX)
                {
                    diff = mini[j - 1] + 1;
                }
                curr[j] = min(diff, cnt);
            }
        }

        if (curr[m - 1] != INT_MAX)
        {
            int total = 0;
            if (i < n - 1)
            {
                total = 1;
            }
            res = min(res, curr[m - 1] + total);
        }

        for (int j = 0; j < m; j++)
        {
            mini[j] = min(mini[j], curr[j]);
        }

        prev = curr;
    }

    if (res == INT_MAX)
        cout << -1 << endl;
    else
        cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCaseInp;
    cin >> testCaseInp;

    while (testCaseInp--)
    {
        sol();
    }

    return 0;
}
