#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;

    vector<int> inps(n);

    for (int i = 0; i < n; i++)
    {
        cin >> inps[i];
    }

    bool checker = false;
    for (int i = 0; i < n; i++)
    {

        bool check = true;
        for (int j = i - 1; j >= 0; j--)
        {
            if (inps[j] != -inps[i])
            {
                check = 0;
                break;
            }
        }

        for (int j = i; j < n; j++)
        {
            if (inps[j] != inps[i])
            {
                check = 0;
                break;
            }
        }

        if (check)
        {
            checker = true;
            break;
        }
    }

    if (checker)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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