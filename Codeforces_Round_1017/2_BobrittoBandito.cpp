#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tt;
    cin >> tt;
    while (tt--)
    {
        float n, m, l1, r1;
        int l2, r2;
        cin >> n >> m >> l1 >> r1;

        l2 = -round(abs(l1) / (abs(l1) + r1) * m);
        r2 = m + l2;
        cout << l2 << ' ' << r2 << endl;
    }

    return 0;
}