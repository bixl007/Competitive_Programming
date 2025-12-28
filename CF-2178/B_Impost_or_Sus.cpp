#include <bits/stdc++.h>
using namespace std;

void solve() {
    string inp;

    cin >> inp;
    int n = inp.size();
    int res = 0;


    if(inp[0] == 'u') {
        inp[0] = 's';
        res++;
    }

    if(inp[n - 1] == 'u') {
        inp[n - 1] = 's';
        res++;
    }

    int cnt = 0;
    for(char ch : inp) {
        if(ch == 'u')
            cnt++;
        else {
            res += cnt / 2;
            cnt = 0;
        }
    }


    cout << res << endl;


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