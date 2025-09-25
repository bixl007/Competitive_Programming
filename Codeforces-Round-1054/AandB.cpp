#include <bits/stdc++.h>
using namespace std;

long long cnt(string str, char ch)
{
    vector<long long> temp;

    for (long long i = 0; i < str.size(); i++)
    {
        if (str[i] == ch)
            temp.push_back(i);
    }

    if (temp.empty())
        return 0;

    for (long long i = 0; i < temp.size(); i++)
    {
        temp[i] -= i;
    }

    long long mid = temp[temp.size() / 2];

    long long ans = 0;
    for (long long i : temp)
    {
        ans += abs(i - mid);
    }

    return ans;
}

void solve()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    long long a = cnt(str, 'a');
    long long b = cnt(str, 'b');

    cout << min(a, b) << endl;
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