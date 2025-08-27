#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int tc;
    cin >> tc;
    
    while(tc--) {
        int a, b;
        cin >> a >> b;
        
        int total = 0;
        int i = 1;
        int j = i * 2;
        while(j <= b && i <= a) {
            total = i + j;
            i++;
            j = i * 2;
        }
        cout << total << endl;
    }
}