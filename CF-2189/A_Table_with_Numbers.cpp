#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n, h, l;
    cin >> n >> h >> l;
    int mini = min(h, l);
    int maxi = max(h, l);

    int common = 0, total = 0;
    vector<int> inps(n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x <= maxi)
        {
            total++;
            if (x <= mini)
            {
                common++;
            }
        }
    }

    cout << min(common, total / 2) << endl;
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

