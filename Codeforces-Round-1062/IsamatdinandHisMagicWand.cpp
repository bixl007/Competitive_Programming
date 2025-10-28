#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, odd = 0, even = 0;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] & 1)
            odd++;
        else
            even++;
    }

    if (odd && even)
        sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
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