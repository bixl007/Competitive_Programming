#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int ts;
    cin >> ts;

    while (ts--)
    {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int cnt = 1;
 
        int i = 0;
        while (i < n)
        {
            if (a[i] > b[i])
            {
                a[i]--;
                cnt++;
                continue;
            }
            i++;
        }

        cout << cnt << endl;
    }
}