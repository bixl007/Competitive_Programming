#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;

    vector<int> inps(n);

    for (int i = 0; i < n; i++)
    {
        cin >> inps[i];
    }

    int sum = accumulate(inps.begin(), inps.end(), 0);

    if(sum & 1) {
        cout << "No" << endl;
    }
    else {
        cout << "Yes" << endl;
    }


    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCaseInp;
    cin >> testCaseInp;

    while (testCaseInp--)
    {
        sol();
    }

    return 0;
}