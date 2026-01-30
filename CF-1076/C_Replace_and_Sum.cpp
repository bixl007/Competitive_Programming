#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n, q;

    cin >> n >> q;

    vector<int> inps1(n), inps2(n);
    vector<pair<int, int>> ps(q);

    for (int i = 0; i < n; i++)
    {
        cin >> inps1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> inps2[i];
    }

    for (int i = 0; i < q; i++)
    {
        cin >> ps[i].first >> ps[i].second;
    }

    vector<int> maxi(n);

    for (int i = 0; i < n; i++)
    {
        maxi[i] = max(inps1[i], inps2[i]);
    }

    vector<int> suff(n);
    suff[n - 1] = maxi[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        suff[i] = max(maxi[i], suff[i + 1]);
    }

    vector<int> pref(n + 1);

    for (int i = 0; i < n; i++)
    {
        pref[i + 1] = pref[i] + suff[i];
    }

    for (int i = 0; i < q; i++)
    {
        int l = ps[i].first;
        int r = ps[i].second;

        cout << pref[r] - pref[l - 1] << " ";
    }

    cout << endl;
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