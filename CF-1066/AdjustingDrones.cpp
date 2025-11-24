#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    long long k;
    cin >> n >> k;
    if (n == 0)
    {
        cout << 0 << endl;
        return;
    }

    vector<long long> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    sort(arr.begin(), arr.end());

    long long ans = 0;
    int idx = 0;
    long long curr = arr[0];
    long long carry = 0;
    bool active = false;
    long long start = -1;

    while (idx < n || carry > 0)
    {
        long long freq = 0;
        while (idx < n && arr[idx] == curr)
        {
            freq++;
            idx++;
        }

        long long total = carry + freq;
        if (total <= k)
        {
            if (active)
            {
                ans = max(ans, curr - start);
                active = false;
            }
            carry = 0;
            if (idx < n && arr[idx] > curr)
                curr = arr[idx];
            else
                ++curr;
        }
        else
        {
            if (!active)
            {
                active = true;
                start = curr;
            }
            carry = total - 1;
            ++curr;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}