#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int tc;
    cin >> tc;

    while (tc--) {

        int n;
        cin >> n;
        string str;
        cin >> str;
        int l = 0, r = 0;
        bool flag = true;

        while (r < n) {
            if (str[l] == '1' && str[r] == '1') {
                while (str[r + 1] == '1' && r + 1 < n) {
                    r++;
                }
                if (r - l + 1 < 3)
                    flag = false;
                l = r;
            }
            l++;
            r++;
            if (flag == false)
                break;
        }
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

    }

}