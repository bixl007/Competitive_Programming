#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int> &dp) {
    if(n == 0)
        return 0;
    if(n < 0)
        return 99999;
    if(dp[n] != -1)
        return dp[n];
    
    int take = 4 + solve(n - 2, dp);
    int notTake = 5 + solve(n - 3, dp);
    
    return dp[n] = min(take, notTake);
}

int main() {
	// your code goes here
    int tc;
    cin >> tc;
    
    while(tc--) {
        int n;
        cin >> n;

        vector<int> dp(n + 1, -1);
        int res = solve(n, dp);
        cout << res << endl;
    }
}
