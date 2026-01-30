#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n, x, k;
    cin >> n >> x >> k;

    int extras = x % k;
    if (extras == 0)
    {
        cout << 0 << endl;
        return ;
    }

    int req = k - extras;

    if (x + req <= n)
    {
        cout << min(extras, req) << endl;
    }
    else
    {
        cout << extras << endl;
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