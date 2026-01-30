#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;

    vector<int> inps(n);

    for (int i = 0; i < n; i++)
    {
        cin >> inps[i];
    }

    vector<bool> checker(n + 1, false);
    int cnt = 0;

    for (int i : inps)
    {
        if (i == 1)
        {
            checker[1] = 1;
            cnt++;
        }
        else if (checker[i - 1])
        {
            checker[i] = 1;
            cnt++;
        }
    }

    cout << cnt << endl;
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