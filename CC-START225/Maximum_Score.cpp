#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;

    vector<int> arr1(n), arr2(n);
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        sum += arr1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    pair<int, int> mini = {1e9, -1};

    for (int i = 0; i < n; i++)
    {
        int diff = abs(arr1[i] - arr2[i]);
        if (diff < mini.first)
            mini = {diff, i};
    }

    sum = sum - arr1[mini.second] + arr2[mini.second];

    cout << sum << endl;
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