#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin >> n;

    int num = (n + 1) / 2;

    cout << num << " ";

    for (int i = 1; i < n; i++)
    {
        if (i % 2 != 0)
        {
            num += i;
        }
        else
        {
            num -= i;
        }
        cout << num << " ";
    }

    
    cout << endl;
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