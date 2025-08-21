#include <bits/stdc++.h>
using namespace std;

int f(int k, vector<int> &arr, int l, int r)
{
    int ans = 0;
    for (int i = l; i <= r; i++)
    {
        while (k % arr[i] == 0)
            k /= arr[i];
        ans = ans + k;
    }
    return ans;
}

int main()
{
    
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n, q;
        cin >> n >> q;

        vector<int> arr(n + 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        while (q--)
        {
            int k, l, r;
            cin >> k >> l >> r;
            cout << f(k, arr, l, r) << endl;
        }
    }

    return 0;
}