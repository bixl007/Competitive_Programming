#include <bits/stdc++.h>
using namespace std;

bool isSafe(int mid, int n, vector<int> &arr1, vector<int> &arr2, int mini, int maxi)
{
    if (maxi - mini < mid)
        return false;

    int low = maxi - mid;
    int high = mini + mid;

    for (int i = 0; i < n; i++)
    {
        if (arr1[i] > low && arr1[i] < high)
        {
            if (arr1[i] != arr2[i])
                return false;
        }
    }

    return true;
}

void sol()
{
    int n;
    cin >> n;

    vector<int> inps(n);

    for (int i = 0; i < n; i++)
    {
        cin >> inps[i];
    }

    if (n == 1)
    {
        cout << -1 << endl;
        return;
    }

    bool checker = true;
    for (int i = 1; i < n; i++)
    {
        if (inps[i - 1] > inps[i])
        {
            checker = false;
        }
    }

    if (checker)
    {
        cout << -1 << endl;
        return;
    }

    vector<int> arr = inps;
    sort(arr.begin(), arr.end());

    int mini = arr[0], maxi = arr[n - 1];

    int low = 1, high = 1e9, res = 0;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (isSafe(mid, n, inps, arr, mini, maxi))
        {
            res = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << res << endl;
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