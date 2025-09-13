#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    long long sum = 0;
    vector<long long> arr(n), odd;

    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];

        if (arr[i] % 2 != 0)
            odd.push_back(arr[i]);
    }

    if (odd.size() == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        long long oddS = (odd.size() / 2);
        sort(odd.begin(), odd.end());

        for (int i = 0; i < oddS; i++)
        {
            sum -= odd[i];
        }
        cout << sum << endl;
    }
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