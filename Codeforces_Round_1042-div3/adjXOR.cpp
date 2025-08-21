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
            int n;
            cin >> n;
            vector<int> a(n), b(n);

            for (int i = 0; i < n; i++)
            {
                cin >> a[i];
            }

            for (int i = 0; i < n; i++)
            {
                cin >> b[i];
            }

            bool checker = true;

            if (a[n - 1] != b[n - 1])
                checker = false;

            for (int i = n - 2; i >= 0; i--)
            {
                if (a[i] == b[i])
                {
                    continue;
                }
                if (a[i] != b[i])
                {
                    if (a[i] ^ b[i + 1] == b[i])
                        continue;
                }
            }
            if (checker)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }