#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            cout << i + 1 << " " << i + 2 << endl;
            return ;
        }
    }
    
    cout << -1 << endl;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
	    solve();
	}

}
