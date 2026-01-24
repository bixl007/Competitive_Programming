#include <bits/stdc++.h>
using namespace std;

bool check(int n)
{
    while (n)
    {
        int rem = n % 10;
        if (rem & 1)
            return true;
        n /= 10;
    }

    return false;
}

vector<int> dig(int n)
{
    vector<int> nums;
    while (n)
    {
        int rem = n % 10;
        nums.push_back(rem);
        n /= 10;
    }

    return nums;
}

void sol()
{
    int n;
    cin >> n;

    if (n & 1)
    {
        cout << 0 << endl;
        return;
    }

    if (check(n))
    {
        cout << 1 << endl;
        return ;
    }

    queue<pair<long long, int>> q;
    q.push({n, 0});
    int mini = 100;

    while (!q.empty())
    {
        long long curr = q.front().first;
        int cnt = q.front().second;
        q.pop();

        if (cnt > 5)
            continue;

        vector<int> temp = dig(curr);

        for (int i : temp)
        {
            long long val = curr - i;

            if (val == 0)
                continue;
            if (val % 2 != 0)
            {
                cout << cnt + 1 << endl;
                return;
            }

            if (check(val))
            {
                cout << cnt + 2 << endl;
                return;
            }

            if (i > 0)
            {
                q.push({val, cnt + 1});
            }
        }
    }

    cout << -1 << endl;
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