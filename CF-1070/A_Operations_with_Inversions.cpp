#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int maxi = INT_MIN;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        if(temp < maxi)
            cnt++;
        else
            maxi = temp;
    }

    cout << cnt << endl;
    
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