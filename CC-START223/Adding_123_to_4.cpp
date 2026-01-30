#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int x, y, z;
    cin >> x >> y >> z;

    cout << min(x, z) + (y / 2) << endl;
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