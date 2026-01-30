#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;

    vector<long long> inps1(n), inps2(n);

    for (int i = 0; i < n; i++)
    {
        cin >> inps1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> inps2[i];
    }

    sort(inps1.rbegin(), inps1.rend());

    long long res = 0, req = 0;

    for (int i = 0; i < n; i++)
    {
        req += inps2[i];

        if (req > n)
            break;

        long long curr = inps1[req - 1];
        long long score = (i + 1) * curr;

        res = max(score, res);
    }

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