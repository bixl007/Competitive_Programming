#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;
    string st;
    cin >> st;
    vector<int> hash(26, 0);

    for (char ch : st)
    {
        hash[ch - 'a']++;
    }

    for (int i : hash)
    {
        if (i > 2)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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