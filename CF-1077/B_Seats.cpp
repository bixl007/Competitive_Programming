#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;

    string inp;
    cin >> inp;

    int prev = -1, next = -1;
    int curr = 0;

    for (int i = 0; i < n; i++)
    {
        if (inp[i] == '1')
        {
            if (prev == -1)
                prev = i;
            next = i;
            curr++;
        }
    }

    if (curr == 0)
    {
        int res = (n + 2) / 3;
        cout << res << endl;
        return;
    }

    int total = 0;

    int left = prev;
    total += (left + 1) / 3;

    int right = (n - 1) - next;
    total += (right + 1) / 3;

    int currGap = 0;

    for (int i = prev + 1; i <= next; i++)
    {
        if (inp[i] == '1')
        {
            total += currGap / 3;
            currGap = 0;
        }
        else
            currGap++;
    }

    cout << curr + total << endl;
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

