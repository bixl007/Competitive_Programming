#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;

    vector<int> inps(n);
    vector<int> idx(n + 1);

    for (int i = 0; i < n; i++)
    {
        cin >> inps[i];
        idx[inps[i]] = i;
    }

    int maxi = n;

    for (int i = 0; i < n; i++)
    {
        if (inps[i] == maxi)
        {
            maxi--;
            continue;
        }

        int index = idx[maxi];

        reverse(inps.begin() + i, inps.begin() + index + 1);
        break;
    }

    for (int i = 0; i < n; i++)
    {
        cout << inps[i] << " ";
    }

    cout << endl;
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