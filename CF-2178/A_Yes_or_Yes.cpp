#include <bits/stdc++.h>
using namespace std;

void solve() {
    string inp;

    cin >> inp;


    int nCnt = 0, yCnt = 0;

    for(char ch : inp) {
        if(ch == 'Y')
            yCnt++;
    }

    if(yCnt <= 1) {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    

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