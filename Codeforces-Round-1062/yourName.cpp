#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string t, s;
    cin >> t >> s;

    sort(t.begin(), t.end());
    sort(s.begin(), s.end());

    if(s == t) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
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