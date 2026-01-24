#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n, a, b;
    cin >> n >> a >> b;

    vector<int> inp(n);

    for (int i = 0; i < n; i++)
    {
        cin >> inp[i];
    }

    bool wearing = false;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (inp[i] < a)
        {
            if (!wearing)
            {
                cnt++;
                wearing = true;
            }
        }
        else if (inp[i] > b)
        {
            wearing = false;
        }
    }

    cout << cnt << endl;
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