#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;

    vector<int> inp1(n), inp2(n);

    for (int i = 0; i < n; i++)
    {
        cin >> inp1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> inp2[i];
    }

    int prev = 0;

    for (int i = 0; i < n; i++)
    {
        if (inp1[i] > inp2[i])
        {
            cout << "No" << endl;
            return;
        }
        else if (inp1[i] < inp2[i])
        {
            if (prev >= inp1[i])
            {
                cout << "No" << endl;
                return;
            }
        }
        prev = max(inp1[i], prev);
    }

    cout << "Yes" << endl;
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