#include <bits/stdc++.h>
using namespace std;

void sol()
{
    long long n, x;
    cin >> n >> x;

    long long total = 0, maxi = LLONG_MIN;

    for (int i = 0; i < n; i++)
    {
        long long first, second, third;
        cin >> first >> second >> third;

        long long free = (second - 1) * first;
        total += free;
        long long diff = (first * second) - third;

        maxi = max(maxi, diff);
    }

    if (total >= x)
    {
        cout << 0 << endl;
        return;
    }

    if(maxi <= 0) {
        cout << -1 << endl;
        return ;
    }

    long long res = x - total;
    long long sol = (res + maxi - 1) / maxi;

    cout << sol << endl;
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