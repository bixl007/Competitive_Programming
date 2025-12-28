#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> nums(n);


    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];

    }

    long long curr = 0;

    for (int i = 0; i < n - 1; i++)
    {
        curr += abs(nums[i] - nums[i + 1]);
    }

    long long res = curr;

    res = min(res, curr - abs(nums[0] - nums[1]));
    res = min(res, curr - abs(nums[n - 1] - nums[n - 2]));

    for (int i = 1; i < n - 1; i++)
    {
        long long temp = curr;

        temp -= abs(nums[i] - nums[i - 1]);
        temp -= abs(nums[i] - nums[i + 1]);
        temp += abs(nums[i + 1] - nums[i - 1]);

        res = min(res, temp);
    }


    cout << res << endl;
    
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

    return 0;
}