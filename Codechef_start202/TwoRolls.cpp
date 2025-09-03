#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int tc;
    cin >> tc;
    
    while(tc--) {
        int x, y;
        cin >> x >> y;
        
        if((x + 2 * y) <= 50 && (x + 2 * y + 10) >= 50) {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
}