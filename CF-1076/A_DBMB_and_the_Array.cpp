#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n, s, x;

    cin >> n >> s >> x;
    vector<int> inps(n);

    for (int i = 0; i < n; i++)
    {
        cin >> inps[i];
    }

    int sum = accumulate(inps.begin(), inps.end(), 0);

    if (sum == s)
    {
        cout << "YES" << endl;
    }
    else if (sum < s && ((s - sum) % x == 0))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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