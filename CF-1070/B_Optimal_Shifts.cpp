#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string st;
    cin >> st;
    vector<int> cnt;

    for(int i = 0; i < n; i++) {
        if(st[i] == '1')
            cnt.push_back(i);
    }

    if(cnt.empty()) {
        cout << n << endl;
        return ;
    }

    int size = cnt.size();

    if(size == 1) {
        cout << n - size << endl;
        return ;
    }

    int res = 0;

    for (int i = 0; i < size; i++)
    {
        int curr = cnt[i];
        int next = cnt[(i + 1) % size];

        int diff = (next - curr + n) % n;

        res = max(res, (diff - 1));
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
    
    return 0;
}