#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<long long> arr(n);
    vector<long long> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
    bool check = false;

    for(long long i : primes) {
        for(long long j : arr) {
            if(j % i != 0) {
                check = true;
                break;
            }
        }

        if(check) {
            cout << i << endl;
            return;
        }
    }

    cout << -1 << endl;
    return;
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