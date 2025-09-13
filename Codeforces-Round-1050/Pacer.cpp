#include <bits/stdc++.h>
using namespace std;

void solve()
{

    long long n, m;
    cin >> n >> m;
    long long temp = 0, cnt = 0, sign = 0;

    for (int i = 0; i < n; i++)
    {
        long long a, b;
        cin >> a >> b;
        if (i >= m)
            break;

        long long diff = a - temp;
        if (diff % 2 == 0)
        {
            if (sign == b)
                cnt += diff;
            else
                cnt += diff - 1;
        }
        else
        {
            if (sign != b)
                cnt += diff;
            else
                cnt += diff - 1;
        }

        temp = a;
        sign = b;
    }

    cnt += m - temp;

    cout << cnt << endl;
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