    #include <bits/stdc++.h>
    using namespace std;

    void solve()
    {
        int n, k;
        cin >> n >> k;
        string st;
        cin >> st;
        int cnt = 0, currActive = -1;

        for (int i = 0; i < n; i++)
        {
            if (st[i] == '1')
            {
                currActive = max(currActive, i + k);
            }
            if (i > currActive)
                cnt++;
        }

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

        return 0;
    }