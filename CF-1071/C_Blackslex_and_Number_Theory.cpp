#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<long long> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    long long tempNum = nums[1] - nums[0];

    if (tempNum > nums[0])
        cout << tempNum << endl;
    else
        cout << nums[0] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--)
        solve();

    return 0;
}