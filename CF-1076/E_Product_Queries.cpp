#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;

    set<int> st;
    bool checkerOne = false;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
            checkerOne = true;
        else
            st.insert(x);
    }

    vector<int> inps(st.begin(), st.end());

    vector<int> dist(n + 1, -1);
    queue<int> q;

    int sz = inps.size();

    for (int i = 0; i < sz; i++)
    {
        if (dist[inps[i]] == -1)
            dist[inps[i]] = 1;
        q.push(inps[i]);
    }

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (int i : inps)
        {
            long long prod = 1ll * node * i;
            if (prod > n)
            {
                break;
            }

            if (dist[prod] == -1)
            {
                dist[prod] = dist[node] + 1;
                q.push(prod);
            }
        }
    }

    if (checkerOne)
    {
        dist[1] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << dist[i] << ' ';
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