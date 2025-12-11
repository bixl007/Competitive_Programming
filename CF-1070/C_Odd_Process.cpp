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

    vector<long long> even, odd;

    for (long long i = 0; i < n; i++)
    {
        if (arr[i] & 1)
            odd.push_back(arr[i]);
        else
            even.push_back(arr[i]);
    }

    sort(odd.rbegin(), odd.rend());
    sort(even.rbegin(), even.rend());

    int n1 = odd.size();
    int n2 = even.size();

    vector<long long> pref(n2 + 1, 0);

    for (int i = 0; i < n2; i++)
    {
        pref[i + 1] = pref[i] + even[i];
    }

    for (int i = 1; i <= n; i++)
    {
        long long minOdd = max(1, i - n2);

        if (!(minOdd & 1))
            minOdd += 1;

        if (minOdd > n1 || minOdd > i)
        {
            cout << "0 ";
        }
        else
        {
            long long req = i - minOdd;
            long long ans = odd[0] + pref[req];
            cout << ans << " ";
        }
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long tc;
    if (cin >> tc)
    {
        while (tc--)
        {
            solve();
        }
    }

    return 0;
}