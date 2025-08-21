#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<vector<int>> arr(n + 1, vector<int>(n + 1));
        vector<int> ans(2 * n + 1, 0);
        vector<bool> visited(2 * n + 1, false);

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> arr[i][j];
                if (!visited[arr[i][j]])
                {
                    ans[i + j] = arr[i][j];
                    visited[arr[i][j]] = true;
                }
            }
        }

        for (int i = 2 * n; i >= 0; i--)
        {
            if (visited[i] == false)
            {
                for (int j = 1; j < 2 * n + 1; j++)
                {
                    if (ans[j] == 0)
                    {
                        ans[j] = i;
                        visited[i] = true;
                    }
                }
            }
        }
        
        for (int i = 1; i < 2 * n + 1; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}