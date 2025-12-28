#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;

    cin >> n >> m;


    vector<pair<int, int>> inps(n);

    for (int i = 0; i < n; i++)
    {
        cin >> inps[i].first;
        inps[i].second = i + 1;
    }

    if(m == 0) {
        cout << -1 << endl;
        return ;
    }


    sort(inps.begin(), inps.end());

    if(m == 1) {
        cout << n - 1 << endl;

        for (int i = 0; i < n - 1; i++)
        {
            cout << inps[i].second << " " << inps[i + 1].second << endl;
        }

        return ;
        

    }

    if(n < 2 * m) {
        cout << -1 << endl;

        return ;
    }



    cout << n - m << endl;

    int temp = n - 2 * m;


    for (int i = 0; i < temp; i++)
    {
        cout << inps[i].second << " " << inps[i + 1].second << endl;
    }


    int finish = n - 2 * m;
    int left = n - m;


    for (int i = 0; i < m; i++)
    {
        cout << inps[left + i].second << " " << inps[finish + i].second << endl;
    }
    
    

    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int ts;

    cin >> ts;


    while (ts--)
    {
        solve();
    }
    
    
    return 0;
}