#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (i & 1)
            {
                ans.push_back(3);
            }
            else
                ans.push_back(-1);
        }

        if (!(n & 1))
            ans[n - 1] = 2;

        for (int i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}