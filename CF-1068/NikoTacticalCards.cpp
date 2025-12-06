#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> arr1(n), arr2(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    long long scoreMaxi = 0, scoreMini = 0;

    for(int i = 0; i < n; i++) {
        long long num1 = arr1[i];
        long long num2 = arr2[i];

        long long temp1 = max(scoreMaxi - num1, num2 - scoreMini);
        long long temp2 = min(scoreMini - num1, num2 - scoreMaxi);

        scoreMaxi = temp1;
        scoreMini = temp2;
    }

    cout << scoreMaxi << endl;

    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc;
    cin >> tc;

    while (tc--)
    {
        solve();
    }
    
    
    return 0;
}