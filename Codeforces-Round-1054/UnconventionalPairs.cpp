#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    vector<long long> arr(n);

    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    long long diff = INT_MIN;

    for (long long i = 0; i < n - 1; i += 2)
    {
        diff = max(diff, abs(arr[i] - arr[i + 1]));
    }

    cout << diff << endl;
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