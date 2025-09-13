#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;

    vector<int> arr1(n), arr2(m);

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    cout << min(n + m, min(n + 1, m + 1)) << endl;
    

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