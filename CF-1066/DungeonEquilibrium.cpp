#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n + 1);

    for (int  i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr[temp]++;
    }


    int res = 0;
    for (int i = 0; i <= n; ++i) {
        if (arr[i] >= i) {
            res += (arr[i] - i);
        } else {
            res += arr[i];
        }
    }

    cout << res << endl;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc;
    cin >> tc;

    while(tc--) {
        solve();
    }
}