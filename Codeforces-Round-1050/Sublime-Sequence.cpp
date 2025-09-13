#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, n;
    cin >> x >> n;

    if(n % 2 == 0) {
        cout << 0 << endl;
    }
    else {
        cout << x << endl;
    }
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