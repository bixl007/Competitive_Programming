#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--)
    {
        long long n;
        cin >> n;
        long long power = 10;
        set<long long> st;

        for (int i = 1; i <= 18 && power + 1 <= n; i++)
        {
            long long temp = power + 1;
            if (n % temp == 0)
            {
                long long res = n / temp;
                st.insert(res);
            }
            power *= 10;
        }
        cout << st.size() << endl;
        if (st.size())
        {

            for (long long i : st)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}