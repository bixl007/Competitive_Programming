#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] == -1)
            arr[i] = 0;
    }

    if (arr[0] == -1 && arr[n - 1] == -1)
    {
        arr[0] = arr[n - 1] = 0;
    }
    else if (arr[0] == -1)
        arr[0] = arr[n - 1];
    else if (arr[n - 1] == -1)
        arr[n - 1] = arr[0];
    int abso = abs(arr[n - 1] - arr[0]);

    cout << abso << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--)
    {
        solve();
    }
}