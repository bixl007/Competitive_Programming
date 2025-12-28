#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;

    cin >> n;

    vector<long long> inp(n);

    for (int i = 0; i < n; i++)
    {
        cin >> inp[i];
    }

    vector<long long> sumPrev(n + 1, 0);

    for (int i = n - 1; i >= 0; i--)
    {
        sumPrev[i] = inp[i] + sumPrev[i + 1];
    }


    long long maxi = LLONG_MIN;

    long long sum = 0;


    for (int i = 0; i < n; i++)
    {
        long long temp = 0;
        if(i == 0)
            temp = -sumPrev[1];
        else {
            temp = inp[0] + sum - sumPrev[i + 1];

        }

        maxi = max(temp, maxi);

        if(i > 0)
            sum += abs(inp[i]);
    }
    


    cout << maxi << endl;
    
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int ts;
    cin >> ts;

    while(ts--)
        solve();
    
    return 0;
}