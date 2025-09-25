#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, cnt = 0;
    cin >> n >> k;
    vector<int> arr(n);
    set<int> st;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == k)
            cnt++;
        st.insert(arr[i]);
    }

    int temp = 0;

    for (int i : st)
    {
        if (i >= k)
            break;
        temp++;
    }

    cout << max(cnt, k - temp) << endl;
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